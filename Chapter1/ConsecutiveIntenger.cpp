/*A program to count how many consecutive times each distinct value appears in the input*/
#include <iostream>

int main()
{
   int input = 0;
   int count = 0, current_input = 0;
   std::cout << "Input an integer "; 
   if(std::cin >> input)
   {
      current_input = input;
      count++;
      while(std::cin >> input)
      {
         if(input == current_input)
         {
            count++;
         }else
         {
            std::cout << "You entered " << current_input << " " << count << " times" << std::endl;
            count = 1;
            current_input = input;
         }
      }
      std::cout << "You entered " << current_input << " " << count << " times" << std::endl;
   }
   return 0;
}