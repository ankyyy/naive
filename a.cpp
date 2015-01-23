#include <iostream>
#include <Infint>
using namespace std;

unsigned long long int square(int base,int pow)
{

	if(pow==0)
return 1;

	else if(pow==1)
	return base;

else if((pow&1)!=0)
	return base*square(base*base,pow/2);
else
	return square(base*base,pow/2);


}
int main()
{
	
unsigned long long int a ,b;
cin>>a>>b;
unsigned long long int temp=square(2,a);

cout<<temp<<endl;
unsigned long long int result=square(2,temp)%b;

cout<<result;


return 0;
}
