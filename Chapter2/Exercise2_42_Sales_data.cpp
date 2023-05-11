/*
Exercise 2.42: Write your own version of the Sales_data.h header and use it to
rewrite the exercise from § 2.6.2 (p. 76).
*/
#include <iostream>
#include <map>
#include <string>
#include "Exercise2_42_Sales_data.h"
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;
/*
1.5.1
Exercise 1.20: http://www.informit.com/title/0321714113 contains a copy
of Sales_item.h in the Chapter 1 code directory. Copy that file to your working
directory. Use it to write a program that reads a set of book sales transactions, writing
each transaction to the standard output.

*/
 void Exercise_1_5_1()
 {
    Sales_data salesData;
   double price{};
   //Read a set of book sales transactions
   while (cin >> salesData.bookNo >> salesData.units_sold >> price)
   {
      //Write each transaction to the standard output
      cout <<  salesData.bookNo << '\t' <<salesData.units_sold << '\t' << price << endl;  
   }
 }
 
 
/*
1.5.2
Exercise 1.21: Write a program that reads two Sales_item objects that have the
same ISBN and produces their sum.
*/

void Exercise1_5_2()
{
   cout  << "Enter two transactions of the same book" << endl;
   Sales_data sd1{}, sd2{};
   cin >> sd1.bookNo >> sd1.units_sold >> sd1.revenue;
   cin >> sd2.bookNo >> sd2.units_sold >> sd2.revenue;
   if(sd1.bookNo == sd2.bookNo)
   {
      sd1.units_sold += sd2.units_sold;
      sd1.revenue += sd2.revenue;
      cout << "Sum of the revenue and units sold for ISBN " << sd1.bookNo << " is " << sd1.units_sold <<" and " << sd1.revenue << " respectively" << endl;
   }else
   {
      cout << "The transactions are not of the same book!" << endl;
   }
}

/*
1.5.3
Exercise 1.22: Write a program that reads several transactions for the same ISBN.
Write the sum of all the transactions that were read.
*/

void Exercise1_5_3()
{
   cout  << "Enter transactions of the same book" << endl;
   Sales_data firstTransaction{}, inputTransaction{};
   cin >> firstTransaction.bookNo >> firstTransaction.units_sold >> firstTransaction.revenue;
   cin >> inputTransaction.bookNo >> inputTransaction.units_sold >> inputTransaction.revenue;
   firstTransaction.units_sold += inputTransaction.units_sold;
   firstTransaction.revenue += inputTransaction.revenue;
   while(cin >> inputTransaction.bookNo   >> inputTransaction.units_sold >> inputTransaction.revenue && inputTransaction.bookNo == firstTransaction.bookNo)
   {
      firstTransaction.units_sold += inputTransaction.units_sold;
      firstTransaction.revenue += inputTransaction.revenue;
   }
   cout << "Sum of the revenue and units sold for ISBN " << firstTransaction.bookNo << " is " << firstTransaction.units_sold <<" and " << firstTransaction.revenue << " respectively" << endl;
  
}

/*
1.5.4
Exercise 1.23: Write a program that reads several transactions and counts how many
transactions occur for each ISBN.
*/

void Exercise1_5_4()
{
   Sales_data first{};
   map<string,int> books;
   cin >> first.bookNo >> first.units_sold >> first.revenue;
   books[first.bookNo]++;
   Sales_data second{};
   while(cin >> second.bookNo >> second.units_sold >> second.revenue)
   {
      if(second.bookNo == first.bookNo)
      {
         books[first.bookNo]++;
      }else
      {
         first.bookNo = second.bookNo;
         books[first.bookNo]++;
      }
   }
   cout << "Book" << "\t\t\t" << "Number of Transactions" << endl;
   for(auto &book:books)
   {
     cout << book.first << '\t' << book.second << endl;
   }
}

/*
1.5.5
Exercise 1.24: Test the previous program by giving multiple transactions representing
multiple ISBNs. The records for each ISBN should be grouped together. - Done*/

/*
1.5.6
Exercise 1.25: Using the Sales_item.h header from the Web site, compile and execute
the bookstore program presented in this section. - NA
*/

int main()
{
   //Exercise_1_5_1();
   // Exercise1_5_2();
   //Exercise1_5_3();
   Exercise1_5_4();
}