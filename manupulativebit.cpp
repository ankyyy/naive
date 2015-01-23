#include <iostream>
using namespace std;

long long int k=0,final_arr[100000000]={0};
	

void bitmanp(int a[],int n)
{
	int min=a[0]^a[n];
		for(int i=0;i<=n-1;i++)
		{
			if((a[i]^a[i+1])<min)
				min=a[i]^a[i+1];
		}
		cout<<min<<endl;
		if(min!=final_arr[k])
		final_arr[++k]=min;
}
void swap( int *a, int *b)
{
	 int temp=*a;
	*a=*b;
	*b=temp;
}
int permute(int arr[],int i,int n)
{
	 int j;
	if(i==n){
		if(k>=n/2)
			return 0;

		int min=arr[0]^arr[n];
		for(int m=0;m<=n-1;m++)
		{
			if((arr[m]^arr[m+1])<min)
				min=arr[m]^arr[m+1];
		}
			if(final_arr[min]!=1)
		{	final_arr[min]=1;
			cout<<min<<endl;
		}
			k++;
		}
	else
	{
		for(j=i;j<=n;j++)
		{
			swap((arr+i),(arr+j));
			permute(arr,i+1,n);
			swap((arr+i),(arr+j));
			
		}
	}
}   
int main()
{
	 int n,arr[200],i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	permute(arr,0,n-1);
	 int max=0;
	for(i=0;i<k;i++)
	{
		if(final_arr[i]>max)
			max=final_arr[i];
	}
	int ans=1,p;
    
    if(max==2)
	{
		cout<<1;
		
	}
    else{
	for(i=2;i<100;i=i*2)
	{	
		if(i>=max)
			{ans--;
			break;}
		++ans;

	}
	cout<<ans;
    }
    return 0;
}