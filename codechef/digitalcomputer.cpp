#include <iostream>
#include <string>
using namespace std;

int pow(int a,int b)
{
	int k=1;
	for(int i=0;i<b;i++)
		k=k*a;
return k;

}

int func(int n)
{

string arr2[200]={" "};
string arr[11];
arr[0]="0111111";
arr[1]="0000110";
arr[2]="1011011";
arr[3]="1001111";
arr[4]="1100110";
arr[5]="1101101";
arr[6]="1111101";
arr[8]="1111111";
arr[7]="0000111";
arr[9]="1101111";

int i,zero[10]={0},no_zero=0,k=0;


for( i=0;i<7;i++)
{
	if(arr[n][i]=='0')
		{
		zero[k]=i;
		k++;
		no_zero++;
		}

}
int bin[32][6]={0};
unsigned int j;
for(j=1;j<=31;j++)
{
unsigned int it;
 k=0;
//cout
unsigned int s=4;
while(k!=5)
{
	it=1<<s;
	if((it&j)!=0)
	bin[j][k]=1;
	else
	bin[j][k]=0;
	
s--;
k++;

}
//cout<<endl;
}

j=1;

string temp2="";

int size=pow(2,no_zero);

while(j!=size)
{
temp2=arr[n];
for(i=0;i<no_zero;i++)
{
if(bin[j][4-i]==1)
	temp2[zero[i]]='1';
else
	temp2[zero[i]]='0';


}

arr2[j]=temp2;
//cout<<temp2<<endl;
j++;

}

int count=0;
for(i=1;i<size;i++)
{
for(k=0;k<10;k++)
{
	if(arr2[i]==arr[k])
		{

	
		count++;
}		}
}

//cout<<count<<endl;
return count+1;

}







int main()
{
	int num;
	cin>>num;
	int a=num%10;
	num=num/10;
	int b=num%10;
	
	cout<<func(a)*func(b)<<endl;


return 0;

}

