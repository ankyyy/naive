#include <iostream>
#include <list>
#include <stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		float n,m;
		cin>>n>>m;
		if(n==1)
			{
				printf("%f\n", m);
				// cout<<m<<endl;
			t--;
			continue;
		}

			if(m==1)
			{
				printf("%f\n", n);
				// cout<<n<<endl;
			t--;
			continue;
		}
		float temp=2+((n*m)-2)*0.5;
		printf("%f\n", temp);
		//cout<<<<endl;


		t--;
	}
	return 0;
}