// comment
#include <iostream>
using namespace std;

// make an array
int fib[60];
// first two terms are given
fib[0] = 0
fib[1] = 1
// and all the following ones can be computed iteratively as
//fib[i] = fib[i-1] + fib[i-2]


int main()
{
  for (int i = 2; i < 60; i++)
  {
    fib[i] = fib[i-1] + fib[i-2];
    i++;
    }
  return 0;
  }