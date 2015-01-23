#include <iostream>
#include <math.h>
using namespace std;
int k;static int count[1000][1000];
int prime(int n)
{
  if(n==2)
  return 1;
  if(n%2==0)
    return 0;
    
  
  int size=sqrt(n);
  for(int i=3;i<=size;i=i+2)
    if(n%i==0)
    return 0;
    
    return 1;
}

int check(int a,int i,int j)
{

    while(!prime(a))
    {
      
      a=a+k;
        if(a>100000)
    {   count[i][j]=-1;
      
      return 0;
      }
     count[i][j]++;
    
   
    }
    
    return 1;
}

int main()
{
    int matrix[1000][1000],flag=0;
    int n,i,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>matrix[i][j];
    
    for(i=1;i<n-1;i++)
    {
    for(j=1;j<n-1;j++)
   {
    int a=(matrix[i][j]);
    int b=(matrix[i-1][j-1]);
    int c=(matrix[i+1][j+1]);
    int d=(matrix[i-1][j+1]);
    int e=(matrix[i+1][j-1]);
    
int p,q,r,s,t;
  p=q=r=s=t=0;


    p=check(e,i,j);
    if(count[i][j]!=-1)
     q=check(d,i,j);
    if(count[i][j]!=-1)
     r=check(c,i,j);
  if(count[i][j]!=-1)
     s=check(a,i,j);
 if(count[i][j]!=-1)
     t=check(b,i,j);
    
    if(p&&q&&r&&s&&t)
    {
    flag=1; 
    }
    }
    }
    
   int arr[1000]={0};
   int small=99999,indexx=99999,indexy=99999;
   
    for(i=1;i<n-1;i++)
    {
    for(j=1;j<n-1;j++)
   {
    
    if(small>=count[i][j]&&count[i][j]!=-1)
   {    small=count[i][j];
    if(indexx>=i)
    {indexx=i;
      if(indexy>j)
      indexy=j;}
    
    
   }}
   
   if(flag)
  {
    cout<<"yes"<<endl;
    cout<<small<<endl;
    cout<<indexx+1<<" "<<indexy+1<<endl;
  }
  else
  cout<<"no"<<endl;
    
   
    
    
    return 0;
}}
