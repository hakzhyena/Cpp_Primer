/*
Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.
*/

#include <vector>
#include <iostream>

using std::vector;
using std::cout; using std::cin; using std::endl;

void printSumOfAdjancentElements(const vector<int> &integers)
{
   cout << "Sum of adjacent elements:" << endl;
   auto n = integers.size();
   if(n == 2)
   {
      cout << integers[0] + integers[1] << endl;
      return;
   }
   for(unsigned i = 0; i < n-1; i+=2)
   {
      cout << integers[i] + integers[i+1] << endl;
   }
}
void printSumOfFirstAndLastElements(const vector<int> &integers)
{
   cout << "Sum of first and last elements:" << endl;
   int n = integers.size();
   
   int iterations = (n / 2);
   
   for(int i = 0; i < iterations; i++)
   {
        cout << integers[i] + integers[n-i-1] << endl;
   }
   
}
int main()
{
   vector<int> integers;
   int input{};
   while(cin >> input)
   {
      integers.push_back(input);
   }
   if(integers.size() == 0 || integers.size() == 1)
   {
      cout << "Input not sufficient" << endl;
      return -1;
   }
   
   //printSumOfAdjancentElements(integers);
   printSumOfFirstAndLastElements(integers);
   
   return 0;
}