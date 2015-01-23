#include <iostream>

using namespace std;


int dfs(int v,int visited [],int graph[][10] )
{

if(visited[v]==1)
{cout<<v<<" ";
return 1;
}		
	else	
	{visited[v]=1;
	cout<<v<<" ";
	for(int i=0;i<5;i++)
{
	if(graph[v][i]==1)
	{
		
			return dfs(i,visited,graph);
	}	
}	
}

return 0;
}



int main()
{
int n;
int visited[10]={0};
int graph[10][10]={0};
int u,v;
cout<<"no of edges "<<endl;
cin>>n;
for(int j=0;j<n;j++)
{
	cin>>u>>v;
	graph[u][v]=1;
}
int temp=0;

for(int i=0;i<5;i++)
{temp=dfs(i,visited,graph);
if(temp==1)
{cout<<"yes"<<endl;

}
}
cout<<"no";


return 0;

}
