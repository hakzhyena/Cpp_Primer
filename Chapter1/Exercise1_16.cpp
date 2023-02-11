/*Exercise 1.16: Write your own version of a program that prints the sum of a set of
integers read from cin.*/

#include <iostream>
int main()
{
   int sum = 0, input = 0;
   std::cout << "Please enter integer inputs" << std::endl;
   while(std::cin >> input) // take input from input stream - put it to input, also check the validity of the std::cin. If it encounters invalid inputs of end-of-file character, stream becomes invalid, hence the condition of while fails
   {
      sum += input;
   }
   std::cout << "Sum of the numbers entered is : " << sum << std::endl;
}