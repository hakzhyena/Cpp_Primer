/*Exercise 1.11: Write a program that prompts the user for two integers. Print each
number in the range specified by those two integers.*/
#include <iostream>

int main()
{
 int input1 = 0, input2 = 0;
 std::cout << "Enter two integer inputs while first input being smaller than the second\n";
 std::cin >> input1 >> input2;
 if(input1 >= input2)
    std::cout << input1 << " is not smaller than " << input2 << '\n';
 input1++;
 while(input1 < input2)
 {
    std::cout << input1 << '\n';
    input1++;
 }
}