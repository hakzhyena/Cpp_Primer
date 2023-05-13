/*
Exercise 3.7: What would happen if you define the loop control variable in the previous
exercise as type char? Predict the results and then change your program to use a
char to see if you were right.
*/

// It would work like charm. Will do.

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
   for(char &c : inputString)
   {
      c = 'X';
   }
   cout << inputString;
}