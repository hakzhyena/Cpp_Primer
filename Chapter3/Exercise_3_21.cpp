/*Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.
 The first exercise is : -
Exercise 3.16: Write a program to print the size and contents of the vectors from exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong.

which in turn was: 

Exercise 3.13: How many elements are there in each of the following vectors? What
are the values of the elements?
(a) vector<int> v1; (b) vector<int> v2(10);
(c) vector<int> v3(10, 42); (d) vector<int> v4{10};
(e) vector<int> v5{10, 42}; (f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};
*/

#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cout; using std::endl;
using std::string;

template <typename T> 
void print(T sequence, string name)
{
   cout << sequence.size() << " elements are there in " << name << " vector" << endl;
   cout << "They are as following:" << endl;
   for(auto it = sequence.cbegin(); it != sequence.cend(); it++)
   {
      cout << *it << '\t';
   }
   cout << endl;
}
int main()
{
   //(a)
   vector<int> v1; //0 elements
   cout << v1.size() << " elements are there in v1 vector" << endl;
   
   //(b)
   vector<int> v2(10); //10 elements value initialized to 0 each
   print(v2,"v2");
   
   
   //(c)
   vector<int> v3(10,42); //10 integers initialized with 42 each.
   print(v3,"v3");
   
   //(d)
   vector<int> v4{10}; //v4 initialized with one int initialized to 10
   print(v4,"v4");
   
   //(e)
   vector<int> v5{10,42}; //v5 has two int elements initialized to 10 and 42 respectively
   print(v5,"v5");
   
   //(f)
   vector<string> v6{10}; //10 empty strings created and initialized to v6
   print(v6,"v6");
   
   //(g)
   vector<string> v7{10, "hi"}; // 10 strings initialized to "hi"
   print(v7,"v7");
   
}