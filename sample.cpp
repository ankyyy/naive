#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>
 using namespace std;
int main() {
 vector<char> v; 
 int i,temp;
string a,b;
ifstream f("a.txt");
while(getline(f,a))
{
    temp=a.length()-1;
for( i=a.length()-1;i>=0;i--)
    {
           if(isspace(a[i])||i==0)
            {   
                    string p;
                    if(!i)
                     p=&a[i];
                    else
                    p=&a[i+1];
                    p[temp]='\0';
                    cout<<p;
                    temp=i-1;

              /*  int j;
                if(i==0)
                    j=i;
                else
                    j=i+1;
                for(;j<=temp;j++)
                    cout<<a[j];
                temp=i-1;
                */
                cout<<" ";
            }
    }
    cout<<endl;

}
 return 0;
}