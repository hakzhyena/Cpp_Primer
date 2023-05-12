/*
3.2
Write a program to read the standard input a line at a time. Modify your program to read a word at a time.
*/

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
   string word;
   cout << "Read one word at a time: " << endl;
   while(cin >> word)
   {
      cout << word << endl; 
   }
}