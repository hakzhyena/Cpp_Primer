/*Exercise 3.4: Write a program to read two strings and report whether the strings
are equal. If not, report which of the two is larger. Now, change the program to report
whether the strings have the same length, and if not, report which is longer.*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using size_type = std::string::size_type;
void Part_1()
{
   string s1, s2;
   cout << "Enter the first string" << endl;
   cin >> s1;
   cout << "Enter the second string" << endl;
   cin >> s2;
   
   if(s1 == s2)
   {
      cout << "The strings are equal" << endl;
   }else if(s1 > s2)
   {
      cout << "First string is larger that the second" << endl;
   }else
   {
      cout << "Second string is larger than the first" << endl;
   }
}

void Part_2()
{
   string s1, s2;
   cout << "Enter the first string" << endl;
   cin >> s1;
   cout << "Enter the second string" << endl;
   cin >> s2;
   size_type s1Size = s1.size();
   size_type s2Size = s2.size();
   if(s1Size == s2Size)
   {
      cout << "strings have the same length" << endl;
   }else if(s1Size > s2Size)
   {
      cout << "First string is longer than the second one" << endl;
   }else
   {
      cout << "Second string is longer than the first one" << endl;
   }
}
int main()
{
   Part_2();
   
}

