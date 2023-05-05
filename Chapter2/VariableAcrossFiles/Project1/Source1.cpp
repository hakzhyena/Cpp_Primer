#include <iostream>
extern const int constInteger;
extern int integer; 
void modifierFun() 
{
	integer++;
	std::cout << "From modfierFun():-" << std::endl;
	std::cout << "constInteger value is: " << constInteger << std::endl;
	std::cout << "non-const integer value is: " << integer << std::endl;
}