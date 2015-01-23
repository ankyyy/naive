#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   fstream file;
   file.open("file.dat",ios::out);
   file<<"ankit";
   file.close();
} 
