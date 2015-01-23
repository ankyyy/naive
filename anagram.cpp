#include <iostream>
#include <algorithm>
using namespace std;


void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
  
/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int i, int n) 
{
   int j; 
   if (i == n)
    cout<<a<<endl;
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
   char a[] = "abba";  
   permute(a, 0, 3);
 //  getchar();
   return 0;
}

