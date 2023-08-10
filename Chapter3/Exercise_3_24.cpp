/*
Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.
*/

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
   for(auto it = integers.begin(); it < integers.end() - 1; it += 2)
   {
      auto it1 = it + 1;
      cout << *it + *(it+1) << endl;
   }
}
void printSumOfFirstAndLastElements(const vector<int> &integers)
{
   cout << "Sum of first and last elements:" << endl;
  
   for(auto it = integers.begin(), it1 = integers.end() - 1; it < it1; it++, it1--)
   {
      cout << *it + *it1 << endl;
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
    if(integers.size() < 1)
    {
       cout << "Input not sufficient" << endl;
       return -1;
    }
   
   printSumOfAdjancentElements(integers);
   printSumOfFirstAndLastElements(integers);
   
   return 0;
}