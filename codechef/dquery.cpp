#include <iostream>
#include <algorithm>
using namespace std;

struct query
{
int l,r,i;

}q[210000];

bool comp(query x,query y)
{
	if((x.l/555)!=(y.l/555))
		return (x.l/555)<(y.l/555);
	else
		return x.r<y.r;
}
int currentr=0,currentl=0,answer=0,ct[30001]={0};
int arr[40000],ans[300000]={0};

void remove(int pos)
{
    
   ct[arr[pos]]--;
    
if(ct[arr[pos]]==0)
        answer--; 

}

void add(int pos)
{
    
 ct[arr[pos]]++;
    
if(ct[arr[pos]]==1)
        answer++; 

}

int main()
{
int n;
cin>>n;


for(int i=1;i<=n;i++)
{
cin>>arr[i];
}
 int m;

cin>>m;
int j;
for( j=1;j<=m;j++)
{
	cin>>q[j].l>>q[j].r;
	q[j].i=j;
}

sort(q,q+m,comp);


for(j=1;j<=m;j++)
{
	int l=q[j].l;
	int r=q[j].r;

	while(currentl<l)
	{
		remove(currentl);
		currentl++;
	}
	
	
	while(currentr<=r)
	{
		add(currentr);
		currentr++;
	}

	
	while(currentl>l)
	{
		add(currentl);
		currentl--;
	}

	
	while(currentr>r+1)
	{
		remove(currentr);
		currentr--;
	}

	ans[q[j].i]=answer;

}

for(j=1;j<=m;j++)
{
cout<<ans[j]<<endl;

}

return 0;
}

