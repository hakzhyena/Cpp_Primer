//Exercise 3.31: Write a program to define an array of ten ints. Give each element the same value as its position in the array.

#include <iostream>
using namespace std;

int main()
{
   int a[10];
   for(int i = 0; i < 10; i++)
   {
      a[i] = i;
   }
   for(auto i : a)
   {
      cout << a[i] << endl;
   }
   
}