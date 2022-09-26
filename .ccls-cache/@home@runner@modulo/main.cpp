#include <iostream>
using namespace std;
int main() 
{
  int n;
  int mod1, mod2;
  int num;
  int cases = 0;
  
  for (n = 0; n < 10; n = n+2)
    {
      cin >> num;
      mod1 = num % 42;
       // cout << mod1 << endl;

      cin >> num;
      mod2 = num % 42;
       // cout << mod2 << endl;

      if (mod1 != mod2) // only works for sorted data with a spread <42 and every other
      {
        cases = cases + 1;
      }
    }
    
  cout << cases; 

  }