/*
Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2D

Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

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


// When the numbers approach 2 billions, they start becoming negative, and in a fibonacci sequence, the numbers should only be increasing. The reason for this is because an int only holds 8 bits, so when the numbers surpass 8 bits, it wraps around past the limit to zero. Therefore, some numbers become negative in the output.