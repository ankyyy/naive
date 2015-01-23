#include <iostream>
#include <list>

using namespace std;
int visited[10]={0};
int graph[10][10]={0};

list<int> q;
bool bfs(int s,int d,int n)
{
	q.push_back(s);
	visited[s]=1;
	
while(!q.empty())
{
	s=q.front();
	if(s==d)
	return true;	
//cout<<q.front()<<" ";
	q.pop_front();
	
	for(int i=0;i<n;i++)
{
	if(graph[s][i]==1)
	{
		if(visited[i]!=1)
			{	q.push_back(i);
			visited[i]=1;}			
	}
}
}
return false;	
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
cout<<bfs(2,1,n)<<endl;
return 0;

}
