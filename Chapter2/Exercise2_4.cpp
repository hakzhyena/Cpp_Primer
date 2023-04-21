/*Exercise 2.4: Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.*/
/* My predictions were correct, so I will move on to the next section*/
#include <iostream>

int main()
{
   unsigned u = 10, u2 = 42; //Two unsigned integers
   std::cout << u2 - u << std::endl; // 32
   std::cout << u - u2 << std::endl; // -32 but since the output of the expression is unsigned - some wrapped around positive value, depending on the implementation.
   int i = 10, i2 = 42; // Two signed integers
   std::cout << i2 - i << std::endl; // 32
   std::cout << i - i2 << std::endl; //-32
   std::cout << i - u << std::endl; // 0
   std::cout << u - i << std::endl; // 0
}

