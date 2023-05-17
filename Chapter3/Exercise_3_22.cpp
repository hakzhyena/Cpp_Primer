/*
Exercise 3.22: Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase.
After you’ve updated text, print its contents.
*/

#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cout; using std::cin; using std::endl;
using std::string;

void ToUpper(std::string &str)
{
   for(auto &s: str)
   {
      s = std::toupper(s);
   }
}
int main()
{
   string line;
   vector<string> text;
   while(std::getline(cin,line))
   {
      if(!line.empty())
         text.push_back(line);
      else
      {
         text.push_back(line);
         break;
      }
   }
   for(auto it = text.begin(); it != text.end() && !((*it).empty()); it++)
   {
      ToUpper(*it);
   }
   for(auto it = text.cbegin(); it != text.cend() && !((*it).empty()); it++)
   {
      cout << *it << endl;
   }
   
}