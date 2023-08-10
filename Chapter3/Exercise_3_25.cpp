/*Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators
instead of subscripts.*/

//Following is the grade clustering program
#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<unsigned> scores(11,0);
unsigned grade;
vector<unsigned>::iterator it = scores.begin();
while(cin >> grade)
{
   if(grade <= 100)
      //++scores[grade/10]; // following is the way of iterators instead of subscripts
   (*(it + (grade / 10)))++;
   
}   
for(auto i : scores)
{
   cout << i << ' ';
}

}