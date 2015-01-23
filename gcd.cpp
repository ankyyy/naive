#include <iostream>
#include <algorithm>
using namespace std;


long long int partition( long long int a[], long long int start, long long int end)
{
 long long  int pivot=a[end];
long long int i,j;
  while(start<end)
  {
    if(a[start]<pivot)
      start++;
    if(a[end]>pivot)
      end--;
    if(a[start]==a[end])
      start++;
    else if(start<end)
    {
       int temp=a[start];
      a[start]=a[end];
      a[end]=temp;
    }

  }
  return end;
}
void quicksort(long long int a[], long long int start, long long int end)
{ 
  if(start<end)
  {
   long long int mid=partition(a,start,end);
  quicksort(a,start,mid-1);
  quicksort(a,mid+1,end); 
  }
}




int main() {
    /* The code required to enter n,k, candies is provided*/

  long long int N,i, K, j,t;
    long long int temp[10000];
    cin >> N >> K;
     for(i=0;i<N;i++)
         cin>>temp[i];
       quicksort(temp,0,N-1);
    
cout<<temp[K-1]-temp[0]<<endl;
    return 0;
}