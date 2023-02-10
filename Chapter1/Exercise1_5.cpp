#include <iostream>

int main()
{
   int a = 0, b = 0;
   std::cin >> a >> b;
   std::cout << "Product of the numbers " << a;
   std::cout << " and " << b ;
   std::cout << " is " << a * b << std::endl;  //endl inserts new line character into output stream and flushes it.
}