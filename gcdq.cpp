#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    int t;
    cin>>t;
    while(t)
        {
       long long int b,w,x,y,z,temp1,temp2,temp3;
        cin>>b>>w>>x>>y>>z;
        temp1=b*x+w*y;
        temp2=b*z+(b+w)*y;
        temp3=w*z+(b+w)*x;
        
	cout<<temp1<<"\n"<<temp2<<endl;cout<<temp3;
        if(temp1<temp2)
         {   if(temp1<temp3)
                cout<<temp1<<endl;
            else
               cout<<temp3<<endl;
         }
         else
        {
             if(temp2<temp3)
                cout<<temp2;
            else
            cout<<temp3;
         }
         
        
        
        
        t--;
    }
    
    
    return 0;
}

