#include <iostream>

using namespace std;

//First priority default constructor, if default constructor doesn't do anything then the in-class initializer takes over, if no in-class initializer as well, then if global object then 0 or equivalent, else undefined values.
struct Data
{
   string s{"Hello"};
   unsigned u{1};
   double r{1.1};
   
   public:
   Data(string s, unsigned u, double r) : s{s}, u{u}, r{r}
   {
      
   }
   Data(){s = {"Hi"};u = {2};r = {2.2};}
   void print()
   {
      cout << "s:"<< s << "    " <<"u:" << u << "    " <<"r:" << r << endl;
   }
};

Data globalD;
int main()
{
   Data d, d1{"Hola!",3,3.3};
   d.print();
   globalD.print();
   d1.print();
   
   
}