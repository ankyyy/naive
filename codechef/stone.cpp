#include <iostream>
#include <cassert>
using namespace std;
long long max(long long arr[],int n)
{
long long i,max=-999;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];	
	}

return max;
}

int main()
{
int n,k,i,j;
long long arr[100009];
cin>>n>>k;
assert(1 <= n && n <= 100000 && 0 <= k && k <= 2000000000);
for(i=0;i<n;i++)
	cin>>arr[i];

if(k==0)
{
for(i=0;i<n-1;i++)
cout<<arr[i]<<" ";
cout<<arr[n-1]<<endl;
return 0;}

if(k%2==0)
k=2;
else
k=1;

for(j=0;j<k;j++)
{
	long long maximum=max(arr,n);
	for(i=0;i<n;i++)
	arr[i]=maximum-arr[i];

}

for(i=0;i<n-1;i++)
cout<<arr[i]<<" ";
cout<<arr[n-1]<<endl;


return 0;
}
