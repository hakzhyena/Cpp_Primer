/*
Exercise 3.15: Repeat the previous program but read strings this time.
*/
#include <vector>
#include <iostream>
#include <string>
using std::vector;
using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
   string input;
   vector<string> values;
   while(cin >> input)
   {
      values.push_back(input);
   }
   cout << "The words that were read and are stored in a vector are:" << endl;
   for(const auto &v : values)
   {
      cout << v << endl;
   }
}