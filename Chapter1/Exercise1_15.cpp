/*Exercise 1.15: Write programs that contain the common errors discussed in the box
on page 16. Familiarize yourself with the messages the compiler generates.*/
#include <iostream>
void factorial(int input)
{
   //dummy function that helps with generating type error.
}
int main() //mising a ) in parameter list for main resulted in fatal Error C1004: unexpected end-of-file found - This is part of syntax errors
{
   std::cout << "Read each file." << std::endl; //adding : instead of ; in the end results in syntax error: missing ';' before :"
   std::cout << "Update master." << std::endl; //Missing quotes around string literal resulted in series of errors starting with 'Update': undeclared identifer. Basically compiler thinks of Update and master as identifiers that were not not declared and left of .endl must have class/struct/union
   std::cout << "Write new master." << std::endl; //When the second output operator is missing compiler says syntax error: missing ; before start of std::endl; It is thinking why there isn't a ; if the statement is ending. 
   return 0; // If we miss ; and end of the current statement compiler gives syntax error missing ; before } on the next line.
   
   //Above were all syntax errors where compiler complains about the 'grammar' of the language. Let's look at Type errors - these are generated when there is a type mismatch. Let's try one.
   //factorial("5"); // So passing a string literal to a function that expected int gives me the error - cannot convert argument from const char [2] to int
   factorial(5);
   //Declaration errors! - Every name used in a C++ program must be declared as in let the compiler know what 'type' it is of before it is used.
   int v1 = 0;
   cin >> v; //when I forgot to mention std:: for the cin compiler said cin undeclared identifier. v is also undeclared identifer for the compiler because it knows about v1 but not v.
   //Edit-compile-debug is the cycle of fixing first, small, obvious errors first, compiling and fixing first,small/obvious errors and repeating. Usually first error would have cascading effect generating in many more errors, so it's always a good idea to fix the errors in sequence and compiling after fixing each error.
}