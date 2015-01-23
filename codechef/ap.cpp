#include <iostream>
using namespace std;

int partition(int a[],int l,int r)
{
    int pivot=r;
    int i=l;int j=r;
    while(1)
    {
        while(a[i]<pivot&&a[i]!=pivot)
            i++;
        while(a[j]>pivot&&a[j]!=pivot)
            j--;
        if(i<j)
        {

            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            int temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
            return j;

        }

    }


}

void quicksort(int a[],int i,int j)
{
    if(i<j)
    {
        int mid=partition(a,i,j);
        quicksort(a,i,mid);
        quicksort(a,mid+1,j);
    }

}

int main()
{
int ar[10]={12,4,3,1,6};
quicksort(ar,0,4);
for(int i=0;i<5;++i)
{

    cout<<ar[i]<<endl
    ;
}
    return 0;
}

