#include <iostream>
using namespace std;

void swap(char *a,char *b)
{

	char temp=*a;
	*a=*b;
	*b=temp;
}
 int main(int argc, char const *argv[])
{

	string a="ABC";
	for(int i=0;i<3;i++)
		for(int j=i;j<3;j++)
		{
				swap(&a[i],&a[j]);
				cout<<a<<endl;
		}
	return 0;
}