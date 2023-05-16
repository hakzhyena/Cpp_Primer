/*
Exercise 3.17: Read a sequence of words from cin and store the values a vector. After
you’ve read all the words, process the vector and change each word to uppercase.
Print the transformed elements, eight words to a line.
*/

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

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
   cout << "Transformed the elements, eight words per line printed below:" << endl;
   for(auto &v : values)
   {
      std::transform(v.begin(), v.end(), v.begin(), std::toupper);
   }
   unsigned counter = 1;
   for(const auto &v:values)
   {
      
      cout << v << ' '; //write counterth v
      counter++;
      if(counter == 9)
      {
         cout << endl; //write new line since we wrote 8 words by now
         counter = 1; //reset the counter
      }
   }
}
