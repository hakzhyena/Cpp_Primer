/*Exercise 1.25: Using the Sales_item.h header from the Web site, compile and execute
the bookstore program presented in this section.*/

//Although I would have liked the challenge of transactions of same isbns not being in a sequence, let me write the code assuming that transactions of same ISBNs are grouped together as menioned in the book.

#include <iostream>
#include "Sales_item.h"
int main()
{
   Sales_item input;
   if(std::cin >> input)
   {
      Sales_item current = input;
      
      while(std::cin >> input)
      {
         if(input.isbn() == current.isbn())
         {
            current += input;
         }else
         {
            std::cout << current <<std::endl; //print current isbn's details
            current = input; //reset current
         }   
      }
         std::cout << current <<std::endl; //print last isbn's details
   }else
   {
      std::cout << "No data to process!" << std::endl;
      return -1;
   }
   return 0;
}