#include <iostream>
using namespace std;

int Add(int x, int y)
{
    if (y == 0)
        return x;
    else
        return Add( x ^ y, (x & y) << 1);
}


int main()
{
	int x=1,y=3;
	 

cout<<Add(x,y);
return 0;
}
