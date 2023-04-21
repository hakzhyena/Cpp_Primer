/* Exercise 2.8: Using escape sequences, write a program to print 2M followed by a newline.
Modify the program to print 2, then a tab, then an M, followed by a newline. */
#include <iostream>

int main()
{
   std::cout << '\62' << '\115'; //Here Escape sequences followed by numbers represent ASCII value of what that number is representing in the basic character set
   std::cout << 2 << '\t' << "M" << std::endl;
}