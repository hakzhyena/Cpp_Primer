/*
Exercise 1.22: Write a program that reads several transactions for the same ISBN.
Write the sum of all the transactions that were read.
*/
#include <iostream>
#include "Sales_item.h"
int main()
{
   Sales_item inputTransaction, sumOfTransactions;
   int differentISBNs = 0; 
   if(std::cin >> inputTransaction)
   {
      sumOfTransactions = inputTransaction;
      while(std::cin >> inputTransaction)
      {
         if(compareIsbn(sumOfTransactions, inputTransaction))
         {
            sumOfTransactions += inputTransaction;
         }else
         {
            differentISBNs++;
         }
      }
      std::cout << "Sum of sales transactions for the ISBN " << sumOfTransactions.isbn() << std::endl;
      std::cout << sumOfTransactions << std::endl;
      if(differentISBNs != 0)
      {
         std::cout << "Note that " << differentISBNs << " sale transactions(s) were of different ISBNs" << std::endl;
      }
      return 0;
   }
   std::cout << "No input entered" << std::endl;
   return -1;
}