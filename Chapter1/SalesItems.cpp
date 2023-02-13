//ISBN stands for International Standard Book Number
//The format used in this example is of the following format: 0-201-70353-X
#include <iostream>
#include "Sales_item.h"

void ReadAndWriteASingleTransaction()
{
   Sales_item transaction1;
   std::cin >> transaction1; // A Sales_item would be expected to have ISBN Number-of-Copies Price-For-Each-Copy
   std::cout << transaction1 << std::endl;
}
void AddTwoTransactions(Sales_item transaction1, Sales_item transaction2)
{
   std::cout << transaction1 + transaction2 << std::endl;
}
int main()
{
   //I learned today that we can redirect input from a file instead of entering the input through command prompt, for that we would do something like -
   //- SalesItems.exe < InputFile.txt on Windows. But note that the input would be read according to the way it is read in the program.
   //Also output can be in same way redirected to text file by adding > OutputFile.txt! Neat, yeah?
   //The file command would look like SalesItems.exe < InputFile.txt > OutputFile.txt
   ReadAndWriteASingleTransaction();
   Sales_item transaction1, transaction2;
   std::cin >> transaction1 >> transaction2;
   AddTwoTransactions(transaction1,transaction2); //Interesting to note that even if the ISBNs are different it adds, but looking at the code, they assume that the // - ISBNs are same.
}