#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a&&b&&c)
            break;
        if(b/a==c/b)
            cout<<"GP "<<c*(c/b)<<endl;
        else
            cout<<"AP "<<c+(c-b)<<endl;

    }
    return 0;
}
