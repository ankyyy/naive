#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n=7;
	queue<string> q;
	q.push("1");
	while(n--)
	{
		string s1=q.front();
		q.pop();
		if(n==2)
			{cout<<s1<<endl;
			break;}
		string s2=s1;
		q.push(s1.append("0"));
		q.push(s2.append("1"));

	}

}