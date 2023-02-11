/*
Exercise 1.13: Rewrite the first two exercises from § 1.4.1 (p. 13) using for loops.
*/
#include <iostream>



int main()
{
    //Rewriting Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.
    int sum = 0;
    std::cout << std::endl;
    for (int i = 51; i < 100; i++)
    {
        sum += i;
    }
    std::cout << sum << '\n' << std::endl;
    /* Rewriting Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a
         decrement operator (--) that subtracts 1. Use the decrement operator to write a while
         that prints the numbers from ten down to zero.*/
    for (int i = 9; i > 0; i--)
    {
        std::cout << i << '\n';
    }
}
