#include <iostream>

using std::cout;
using std::endl;

//Copy and direct initializations are different forms of initializations, that's all. When you have single initializer, we can use either the direct or the copy form of initialization. I would prefer direct because that seems elegant to my eyes.

// You define any one constructor, default constructor isn't provided to you by the compiler. However, even if you define any constructor such as default or parameterized, copy constructor and assignment operators are provided to you by compiler.
class A
{
   
   public:
   int i;
    A(const A& rhs)
    {
      cout << "Copy constructor is called" << endl;
    }
    A()
    {
      cout << "Default constructor is called" << endl;
    }
    A(int dummy)
    {
       cout << "Parameterized constructor is called" << endl;
    }
    A& operator=(const A &rhs)
    {
       cout << "Assignment operator is called" << endl;
       return *this;
    }
};
int main()
{
   cout << "a1" << endl;
   A a1; //Default constructor
   cout << "a2" << endl;
   A a2 {a1}; // Direct initialization - copy constructor is called.
   cout << "a3" << endl;
   A a3 = A(); // Default constructor, copy constructor
   cout << "a4" << endl;
   A a4 {A()}; // Default constructor, copy constructor
   cout << "a5" << endl;
   A a5 = A(10); //Paramaterized constructor, copy constructor
   cout << "a6" << endl;
   A a6 = a5; // Typical copy constructor (copy initialization)
   a6 = a4; // Assignment operator is called
   
   //However, you can see that for a3, a4 and a5 copy constructor isn't called. This is due to something called copy elison.
   return 0;
}