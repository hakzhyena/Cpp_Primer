#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
//Read words and write each of them to the console
void ReadWords()
{
   string word;
   while(cin >> word)
   {
      cout << word << '\t';
   }
   cout << endl;
}
//Read lines and write each of them to the console

void ReadLines()
{
   string line;
   while(std::getline(cin,line))
   {
      cout << line << endl;
   }
   
}

int main()
{
   
   ReadWords();
   //ReadLines();
   return 0;
}