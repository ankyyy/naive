#include<iostream>
using namespace std;

int arr1[100],arr2[100];

int max(int a[],int n)
{
int m=a[0],index=0,i;
for(i=1;i<n;++i)
{
	if(a[i]>m)
	index=i;
}

return index;
}


void func(int a[],int n,int index)
{
int i;
for(i=0;i<n;++i)
{
	if(i==index)
		a[i]-=1;
	else
		a[i]+=1;
	
}
}

int  compare(int a1[],int n)
{
int i,flag=0,count=0;
for(i=0;i<n;++i)
{
	if(a1[i]!=arr2[i])
		{flag=1;
		break;}
}

//cout<<flag;
if(flag==1)
{
for(i=0;i<n;++i)
{
	if(a1[i]==arr1[i])
		{
		count+=1;
		}
}
if(count==n)
return -1;

count=0;
for(i=0;i<n;++i)
{

	if(a1[i]>arr2[i]+1)
		{
		count+=1;
		}
}
if(count==n)
return -1;

return 0;

}//if
else
return 1;


}


int main()
{
int test;
cin>>test;

while(test)
{
int n,i,ans=0;
cin>>n;
for(i=0;i<n;++i)
{
	cin>>arr1[i];
}
for(i=0;i<n;++i)
{
	cin>>arr2[i];
}

int temp=0;
for(i=0;i<n;++i)
{
	if(arr1[i]==arr2[i])
		temp++;
}
if(temp==n)
{
cout<<0<<endl;
test--;
continue;
}

if(n==1)
{
if(arr1[0]<=arr2[0])
{
cout<<-1<<endl;
test--;
continue;
}
if(arr1[0]>arr2[0])
{
	while(arr1[0]!=arr2[0])
		{
			arr1[0]--;
			ans++;
		}
cout<<ans<<endl;
test--;
continue;
}


}

int a[100]={0};
for(i=0;i<n;++i)
{
	a[i]=arr1[i];
}

int m,ret;
while(1){  //while start

m=max(a,n);
func(a,n,m);
ret=compare(a,n);

if(ret==0)
ans+=1;

if(ret==1)
{
ans+=1;
break;
}
if(ret==-1)
{
ans=-1;
break;
}

}//while


cout<<ans<<endl;
test--;
} //while outer
return 0;
}
