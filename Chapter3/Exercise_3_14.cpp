/*
Exercise 3.14: Write a program to read a sequence of ints from cin and store those
values in a vector.
*/
#include <vector>
#include <iostream>
using std::vector;
using std::cout; using std::cin; using std::endl;

int main()
{
   int input;
   vector<int> values;
   while(cin >> input)
   {
      values.push_back(input);
   }
   cout << "The integers that are read and stored in a vector are:" << endl;
   for(const auto &i : values)
   {
      cout << i << endl;
   }
}