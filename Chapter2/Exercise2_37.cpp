/*
Assignment is an example of an expression that yields a reference type.
The type is a reference to the type of the left-hand operand. That is, if i is an int, then
the type of the expression i = x is int&. Using that knowledge, determine the type
and value of each variable in this code:
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
*/
#include <iostream>
using namespace std;
template <typename t> struct TD;
int main()
{
   int a = 3, b = 4;
   decltype(a) c = a; //type of a is int so c is of type and and since it is assigned with value from a c holds 3
   decltype (a = b) d = a; //int &d = a; d would have type int& and value of 3
   
   cout << "a" << " " << a << " " << "b" << " " << b << " " << "c" << " " << c << " " << "d" << " " << d << endl;
   
   //Un-Comment the following to verify the types.
   // TD<decltype(a)> t1;
   // TD<decltype(b)> t2;
   // TD<decltype(c)> t3;
   // TD<decltype(d)> t4;
}