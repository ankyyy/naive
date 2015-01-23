#include <iostream>
using namespace std;

int getsum(int bin[],int index)
{
    int sum=0;
    index=index+1;
    while(index>=1)
    {
        sum=sum+bin[index];
        index=index-(index&(-index));   
    }

return sum;

}


void update(int bin[],int n,int index,int value)
{
    index=index+1;
    while(index<=n)
{
    bin[index]+=value;

    index=index+(index&(-index));
}

}

int main()
{
int arr[]={3,2,5,6,4};
int binary[10]={0};

for(int i=0;i<5;i++)
{
    update(binary, 5,i,arr[i]);
}


cout<<getsum(binary,1)-getsum(binary,0)<<endl;
update(binary,5,2,1);
cout<<getsum(binary,3)<<endl;


return 0;
}
