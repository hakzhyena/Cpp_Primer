#include <iostream>
//Since reference is just an alias of the object it is bound to, after the binding, all the operations on the reference are operations on the bound object, including but not limited to address of operation. Hence, when we fetch the address of the reference we just get the address of the bound object.
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