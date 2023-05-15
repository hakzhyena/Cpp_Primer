/*
This program counts the number of punctuation characters in the given text input.
*/

#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using size_type = std::string::size_type;

int main()
{
   string input{}, inputSentence{}, outputSentence{};
   decltype(inputSentence.size()) pnctcnt{};
   string puncts{};
   cin >> input;
   inputSentence = input;
   while(cin >> input)
   {
      inputSentence += ' ' + input;
   }
   for(const auto &c : inputSentence)
   {
      if(std::ispunct(c))
      {
         pnctcnt++;
         puncts+=c;
      }
      outputSentence+=toupper(c);
         
   }
   cout << "Input string is: " << inputSentence << endl;
   cout << "Input string had " << pnctcnt << " punctuation(s)" << endl;
   cout << "punctuations: " << puncts << endl;
   cout << "Output string is: " << outputSentence << endl;
   return 0;
}
