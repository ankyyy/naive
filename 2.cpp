#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n)
{
if(n==0)
return 1;

return (n*factorial(n-1));
}

int main()
{
 
int n,k,temp=0;
cin>>n>>k;

for(int i=1;i<=n-k;i++)
{
	temp+=factorial(n)/(factorial(n-i)*factorial(i));
	
}

temp++;
int prod=1;
for(int i=0;i<n;i++)
{
prod=prod*2;
}

cout<<temp<<"/"<<prod<<endl;
 




 return 0;
}



