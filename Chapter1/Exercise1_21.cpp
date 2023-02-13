/*
Exercise 1.21: Write a program that reads two Sales_item objects that have the
same ISBN and produces their sum.
*/
#include <iostream>
#include "Sales_item.h"
int main()
{
   Sales_item transaction1, transaction2;
   std::cin >> transaction1 >> transaction2;
   if(compareIsbn(transaction1, transaction2) != true)
   {
      std::cout << "Sale transactions are for different ISBNs" << std::endl;
      return -1;
   }
   std::cout << transaction1 + transaction2 << std::endl;
   return 0;
}