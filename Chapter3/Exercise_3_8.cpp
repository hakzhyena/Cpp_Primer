/*
Exercise 3.8: Rewrite the program in the first exercise, first using a while and again
using a traditional for loop. 
*/

//Which of the three approaches do you prefer and why?
//Ans: I would say I would prefer range based for loops because they are concise and are very handy to use when you need to go through whole range/sequence.
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void usingWhile()
{
   string input, inputstring;

   while(cin >> input)
   {
      inputstring += input;
   }

   decltype(inputstring.size()) length = inputstring.size();
   decltype(inputstring.size()) index {0};

   while(index < length)
   {
      inputstring[index] = 'X';
      index++;
   }
   
   cout << inputstring;
}

void usingTradtionalFor()
{
   string input, inputstring;

   while(cin >> input)
   {
      inputstring += input;
   }

   decltype(inputstring.size()) length = inputstring.size();
   decltype(inputstring.size()) index {0};
   
   for(;index < length;index++)
   {
      inputstring[index] = 'X';
   }
   
   cout << inputstring;
   
}
int main()
{
   //usingWhile();
   usingTradtionalFor();
   return 0;
}