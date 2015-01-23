#include <iostream>
using namespace std;



float squareroot(float x)
{
	float n=x;
	float y=1;
	float e=0.0001;
	while((x-y)>e)
	{
		x=(x+y)/2;
		y=n/x;
	}
return x;
}


int main()
{
cout<<squareroot(5);

return 0;
}
