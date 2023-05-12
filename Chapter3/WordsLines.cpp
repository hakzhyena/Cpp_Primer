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
   //Read lines that are longer than 80 chars only
   while(std::getline(cin,line))
   {
      if(line.size() > 80)
         cout << line << endl;
   }
   
}
/* A class with default constructor*/
class A
{
   public:
   A()
   {
      cout << "Default constructor" << endl;
   }
};
int main()
{
   
   //ReadWords();
   //ReadLines();
   //Both a and b definitions call default constructors
   A a; 
   A b{};
   return 0;
}