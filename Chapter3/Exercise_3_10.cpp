/*
Exercise 3.10: Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.
*/

#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
   string input, inputSentence, outputSentence;
   decltype(inputSentence.size()) counter{};
   while(getline(cin,input))
   {
      inputSentence += input + '\n';
   }
   for(const auto &c : inputSentence)
   {
      if(std::ispunct(c))
      {
         inputSentence.erase(inputSentence.begin() + counter);
      }
      counter++;
   }
   cout << "Input setence without punctuations" << endl;
   cout << inputSentence << endl;
}