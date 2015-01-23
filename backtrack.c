
#include <stdio.h>


void swap (char *x,char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
char * permute(char a[], int i, int n) 
{
   int j; 
   if(i==n){
    //int m;
  //  for ( m = 0; m<=n; ++m)
    {
        printf("%s",a);
      /* code */
    }printf("\n");}
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
} 
 
/* Driver program to test above functions */
int main()
{
char a[] = "ABC";  
   permute(a, 0, 2);
   //getchar();
   return 0;
}
