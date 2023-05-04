#include <iostream>

int main()
{
   int i = 1024;
   int &j = i;
   std::cout << "i is located at " << &i << std::endl;
   std::cout << "j is located at " << &j << std::endl; // Using address of on reference just fetches the address of the initialized object
   std::cout << "Value at i is " << i << std::endl;
   std::cout << "Value at j is " << j << std::endl;
   j = 2048;
   std::cout << "Value at i is " << i << std::endl;
   std::cout << "Value at j is " << j << std::endl;
   
}