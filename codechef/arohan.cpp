#include <iostream>
using namespace std;



int getsum(int bit[],int n,int index)
{
	 int sum = 0; // Iniialize result
 
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
 
    // Traverse ancestors of BITree[index]
    while (index>=1)
    {
        // Add current element of BITree to sum
        sum += bit[index];
 
        // Move index to parent node
        index -= index & (-index);
    }
    return sum;

}


int main()
{

 int N,Q,a,b;
string temp;
cin>>N>>Q;
int arr[1000001]={0};
for(int i=0;i<N;++i)
cin>>arr[i];
int n=N;
int bit[1000001]={0};
	for(int i=0;i<n;i++)
	{
		int index=i;
			index=index+1;
		while(index<=n)
		{
			bit[index]+=arr[i];
				index=index+(index&(-index));
		}
	}

for(int j=0;j<Q;++j)
{
	cin>>temp>>a>>b;
	if(a==b)
		cout<<arr[a-1];
	else

	cout<<getsum(bit,n,b-1)-getsum(bit,n,a-2)<<endl;

}

return 0;

}

