/*
Exercise 2.40: Write your own version of the Sales_data class.
*/
#include <string>
#include <iostream>

using namespace std;

struct Sales_data
{
   std::string bookNo;
   unsigned units_sold {0};
   double revenue {0.0};
   public:
   
   void print()
   {
      cout << "bookNo:   " << bookNo << "   units_sold:   " << units_sold << "   revenue:   " << revenue <<endl;
   }
};

int main()
{
   Sales_data sd;
   sd.print();
}