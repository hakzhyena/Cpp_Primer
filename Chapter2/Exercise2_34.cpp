/*Exercise 2.34: Write a program containing the variables and assignments from the
previous exercise. Print the variables before and after the assignments to check
whether your predictions in the previous exercisewere correct. If not, study the examples
until you can convince yourself you know what led you to the wrong conclusion.*/
#include <iostream>

int main()
{
   int i = 0, &r = i;
   auto a = r;

   const int ci = i, &cr = ci;
   auto b = ci; // b is an int (top-level const in ci is dropped)
   auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
   auto d = &i; // d is an int* (& of an int object is int*)
   auto e = &ci; // e is const int* (& of a const object is low-level const)
   const auto f = ci; // deduced type of ci is int; f has type const int
   auto &g = ci; // g is a const int& that is bound to ci
   auto &h = 42; // error: we can’t bind a plain reference to a literal
   const auto &j = 42;
   auto k = ci, &l = i; // k is int; l is int&
   auto &m = ci, *p = &ci; // m is a const int&; p is a pointer to const int
   // error: type deduced fromi is int; type deduced from &ci is const int
   auto &n = i, *p2 = &ci;

   a = 42; // i is assigned with 42. 
   b = 42; // ci is assigned with 42
   c = 42; // ci is assigned with 42
   d = 42; // error, you are assigning an integer literal to a pointer
   e = 42; // error, you are assigning an integer literal to a pointer
   g = 42; // error, you can't change value of a reference pointing to int that is const   
}