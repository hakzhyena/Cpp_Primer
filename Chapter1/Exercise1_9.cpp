//Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.

#include <iostream>
#include <cstdint>

int main()
{
   uint64_t sum = 0;
   int counter = 51;
   while (counter < 100)
   {
      sum += counter;
      counter++;
   }
   std::cout << sum;
}