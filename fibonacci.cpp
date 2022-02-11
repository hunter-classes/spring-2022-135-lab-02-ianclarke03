// comment
#include <iostream>
using namespace std;


int main()
{
  // make an array
int fib[60];
// first two terms are given
fib[0] = 0;
fib[1] = 1;
// and all the following ones can be computed iteratively as
//fib[i] = fib[i-1] + fib[i-2]
  for (int i = 2; i < 60; i++)
  {
    fib[i] = fib[i-1] + fib[i-2];
    cout << fib[i] << "" << endl;
    }
  return 0;
  }

//Once your program is complete and works, check carefully the values printed on the screen. Specifically, what is happening when the numbers approach two billions? We expect that at some point the numbers start diverging from what they should be. Describe what you observe and explain why it is happening in a program comment.

// because the 