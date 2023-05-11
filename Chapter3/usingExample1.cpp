#include <iostream>

using std::cin;

int main()
{
   int i{};
   cin >> i;
   //cout << i; //error, not sure what cout is! - cout undeclared identifer
   std::cout << i;
   return 0;
}