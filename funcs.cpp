/*
Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2B

asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>
using namespace std;

void print_interval (int L, int U)
{
  do{
    cout << L << " ";
    L++;
  } while (L < U + 1);
}