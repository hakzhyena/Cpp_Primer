/*
Exercise 1.12: What does the following for loop do? What is the final value of sum?
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;
*/

//For the sake of simplicity I did this with -3 to 3. This is basically addition of -3, -2, -1, 0, 1, 2, 3. As you can see negative and positive number cancel each //other out and we remain with 0. So the same thing can be said for -100 to 100. Hence, the finaly value of sum is 0. Following I just executed the program which //proves my point.
#include <iostream>
int main()
{
   int sum = 0;
   for (int i = -100; i <= 100; ++i)
      sum += i;
   std::cout << "Value of sum is " << sum << '\n';
}