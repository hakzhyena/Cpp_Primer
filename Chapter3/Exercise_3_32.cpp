//Exercise 3.32: Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.

//Copying the code from previous exericse - 

#include <iostream>
#include <vector>

using namespace std;

void usingArrays()
{
   int a[10]{0,1,2,3,4,5,6,7,8,9};
   for(auto i : a)
   {
      cout << i << endl;
   }
   cout << endl;
   //int b[10]{a}; //you can't do this.error: cannot convert from int [10] to int
   int b[10]{};
   //b = a; // neither this, error: array type int[10] is not assignable. So as you can see plain arrays aren't as flexible as std containers. To copy you need to 
         // copy each elements
   int index = 0;
   for(const int &i: a)
   {
      b[index] = i;
      index++;
   }
   for(auto i : b)
   {
      cout << i << endl;
   }
}

void usingVectors()
{
   vector<int> vec{0,1,2,3,4,5,6,7,8,9};
   for(auto i : vec)
   {
      cout << i << endl;
   }
   cout << endl;
   vector<int> vec1{vec};
   for(auto i : vec1)
   {
      cout << i << endl;
   }
   
   //So as you can see, copying the values from one vector to another is much easier than it is for the same with array.
}
int main()
{
   //usingArrays();
   usingVectors();
   
}