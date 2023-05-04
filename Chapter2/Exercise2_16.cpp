#include <iostream>

using namespace std;

int main()
{
  int i = 0, &r1 = i; double d = 0, &r2 = d;
  
  cout << "i:" << i << ' ' << "r1:" << r1 << ' ' << "d:" << d << ' ' << "r2:" << r2 << endl;  
  r2 = 3.14159;
  cout << "i:" << i << ' ' << "r1:" << r1 << ' ' << "d:" << d << ' ' << "r2:" << r2 << endl;  
  r2 = r1;
  cout << "i:" << i << ' ' << "r1:" << r1 << ' ' << "d:" << d << ' ' << "r2:" << r2 << endl;  
  i = r2;
  cout << "i:" << i << ' ' << "r1:" << r1 << ' ' << "d:" << d << ' ' << "r2:" << r2 << endl;  
  r1 = d;
  cout << "i:" << i << ' ' << "r1:" << r1 << ' ' << "d:" << d << ' ' << "r2:" << r2 << endl;  
  return 0;
}