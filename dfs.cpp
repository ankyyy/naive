#include <iostream>

using namespace std;
int visited[10]={0};
int graph[10][10]={0};

void dfs(int v,int n)
{

	visited[v]=1;
	cout<<v<<" ";
	for(int i=0;i<n;i++)
{
	if(graph[v][i]==1)
	{
		if(visited[i]!=1)
			dfs(i,n);
	}	
}	

}



int main()
{
int n;
int u,v;
cout<<"no of edges "<<endl;
cin>>n;
for(int j=0;j<n;j++)
{
	cin>>u>>v;
	graph[u][v]=1;
}
dfs(,n);
return 0;

}
