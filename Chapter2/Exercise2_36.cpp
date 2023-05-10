/*Exercise 2.36: In the following code, determine the type of each variable and the value
each variable has when the code finishes:*/
#include <iostream>

int main()
{
   int a = 3, b = 4;
   decltype(a) c = a; // c is int 3 4 3 
   decltype((b)) d = a; // d is int& 3 4 3 3
   ++c; // 3 4 4 3
   ++d; //  4 4 4 4
   std::cout << a << "  " << b  <<"  " << c  <<"  " << d  << std::endl; // 4 4 4 4
}
