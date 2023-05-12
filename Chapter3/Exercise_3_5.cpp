/*
Exercise 3.5: Write a program to read strings from the standard input, concatenating
what is read into one large string. Print the concatenated string. Next, change
the program to separate adjacent input strings by a space.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Fun()
{
   string finalString, input;
   cin >> input;
   finalString += input;
   string finalStringWithSpaces{finalString};
   while(cin >> input)
   {
      finalString += input;
      finalStringWithSpaces += ' ' + input;
   }
   cout << finalString << endl << finalStringWithSpaces << endl; 
}

int main()
{
   Fun();
}