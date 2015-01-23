#include <iostream>
using namespace std;

int partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	while(start<end)
	{
		if(arr[start]<pivot)
			start++;
		if(arr[end]>pivot)
			end--;
		if(arr[start]==arr[end])
			start++;
		else if(start<end)
		{
			int temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
		}
	}
	return end;
}

int quicksort(int arr[],int start,int end)
{
	if(start<end)
	{
	int p=partition(arr,start,end);
	quicksort(arr,start,p-1);
	quicksort(arr,p+1,end);
	}
}

int main()
{
	int arr[44]={1,8,9,4,0,5,1,1};
	//quicksort(arr,0,7);
	//for (int i = 0; i<8; ++i)
	{
	//		cout<<arr[i];		/* code */
	}
for (int i = 1; i<=3; ++i)
{
	cout<<i<<" "<<7-i;
}

}