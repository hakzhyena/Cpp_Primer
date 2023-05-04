/*Exercise 2.18: Write code to change the value of a pointer. Write code to change the
value to which the pointer points.*/
#include <iostream>

int main()
{
   int i = 10, j = 20;
   int *pi = &i;
   pi = &j; // changee the value of a pointer
   *pi = 10; // changed the value to which the pointer points
   std::cout << i << ' ' << j << std::endl;
}