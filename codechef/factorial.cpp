#include <iostream>
using namespace std;
int main()
{
  int  n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        long long int temp;
        int count=0;
        cin>>temp;
        long long int five=5;
        while((temp/five)>=1)
        {
                count=count+temp/five;
                five=five*5;

        }
        cout<<count<<endl;
    }

    return 0;
}
