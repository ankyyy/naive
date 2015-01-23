#include <iostream>
using namespace std;
int main()
{
	int count,t=1,temp=0;
	cin>>count;
	for (int i = 0; i < count; ++i)
	{
		temp=temp+t;
		cout<<temp<<" ";
		t=t+2;

	}
}


/*perfect squares are succesive sum of odd nos

1,1+3,1+3+5,1+3+5+7
1, 4,   9,    16

*/