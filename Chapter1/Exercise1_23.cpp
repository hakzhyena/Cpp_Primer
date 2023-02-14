/*
Exercise 1.23: Write a program that reads several transactions and counts how many
transactions occur for each ISBN.
*/
#include <iostream>
#include <map>
#include "Sales_item.h"
int main()
{
   Sales_item input;
   std::map<std::string,unsigned int> isbns;//std::map is chosen because it can contain only unique keys, since we want to count the transactions for each unique isbn it makes sense to use the std:map here.
   while(std::cin >> input)
   {
      isbns[input.isbn()]++;
   }
   for(auto i: isbns)
   {
      std::cout << "There are " << i.second << " number of transactions(s) for " << i.first << std::endl;
   }
   return 0;
}