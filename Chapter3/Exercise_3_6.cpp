/*
Exercise 3.6: Use a range for to change all the characters in a string to X.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
   string input, inputString;
   while(cin >> input)
   {
      inputString += input;
   }
   for(auto &c : inputString)
   {
      c = 'X';
   }
   cout << inputString;
}