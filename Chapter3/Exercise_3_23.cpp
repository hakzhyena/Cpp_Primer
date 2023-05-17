/*
Exercise 3.23: Write a program to create a vector with ten int elements. Using an iterator, assign each element a value that is twice its current value. Test your program by printing the vector.
*/

#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
   vector<int> elems{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   for(auto it = elems.begin(); it != elems.end(); it++)
   {
      *it *= 2;
   }
   for(auto it = elems.cbegin(); it != elems.cend(); it++)
   {
      cout << *it << endl;
   }
   
}