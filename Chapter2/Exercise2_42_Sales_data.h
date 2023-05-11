/*
Exercise 2.42: Write your own version of the Sales_data.h header and use it to
rewrite the exercise from § 2.6.2 (p. 76).
*/
#ifndef EXERCISE_2_42_SALES_DATA
#define EXERCISE_2_42_SALES_DATA
#include <iostream>

using namespace std;
struct Sales_data
{
   std::string bookNo{};
   unsigned units_sold{};
   double revenue{};
   
   void print()
   {
      cout << "bookNo:   " << bookNo << "   units_sold:   " << units_sold << "   revenue:   " << revenue << endl;
   }
};

#endif