#include <iostream>
#include <math.h>
using namespace std;

int prime(int n)
{
	
	if(n==2||n==1)
		return 1;
	if(n%2==0)
		return 0;
	int num=sqrt(n);
	for (int i = 3; i<=num; i=i+2)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int nearest_prime(int n)
{
	for(int i=n-1;i>=1;i--)
		if(prime(i))
			return i;
}


int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		int count=0;
		if(n==1)
			{
				cout<<"ALICE"<<endl;
					break;			
			}
		
			if(n==2)
			{
				cout<<"BOB"<<endl;
					break;			
			}
		
			int num;
		while(1)
		{
			 num=nearest_prime(n);
			n=n-num;
			count++;
			//cout<<num<<endl;
			if(n==1)
				break;
		}
		count--;
		if(count%2==0)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;
		
		t--;
	}

	return 0;
}