#include <iostream>
#include "Source1.h"
extern const int constInteger = 10; //As you can see, if you want to share a const object across -
//- multiple files, you need to mark it as extern in the definition
int integer = 20;
int main() 
{
   int i{};
   int& const ref = i;
   std::cout << "constInteger value is: " << constInteger << std::endl;
   std::cout << "non-const integer value is: " << integer << std::endl;
   modifierFun();
}