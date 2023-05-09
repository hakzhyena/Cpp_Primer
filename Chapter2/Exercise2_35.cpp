/*Exercise 2.35: Determine the types deduced in each of the following definitions. Once
you’ve figured out the types, write a program to see whether you were correct.*/

template<typename T> struct TD;
int main()
{
   const int i = 42;
   auto j = i; // int
   TD<decltype(j)> td;
   const auto &k = i; //const int &
   TD<decltype(k)> td1;
   auto *p = &i; //int*
   TD<decltype(p)> td2; 
   const auto j2 = i, &k2 = i; //int, const int &
   TD<decltype(j2)> td3;
   TD<decltype(k2)> td4;
   
   //I am still not hundred percent clear on this, I might have to revisit this later, I am not sure when you would want to put a const before an auto. Even without that the const seems to be retrieved from the 'original'
}
