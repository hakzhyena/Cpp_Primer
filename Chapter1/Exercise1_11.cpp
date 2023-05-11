/*Exercise 1.11: Write a program that prompts the user for two integers. Print each
number in the range specified by those two integers.*/
#include <iostream>
using std::cout;
using std::cin;
int main()
{
 int input1 = 0, input2 = 0;
 cout << "Enter two integer inputs while first input being smaller than the second\n";
 cin >> input1 >> input2;
 if(input1 >= input2)
    cout << input1 << " is not smaller than " << input2 << '\n';
 input1++;
 while(input1 < input2)
 {
    cout << input1 << '\n';
    input1++;
 }
}