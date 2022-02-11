/*
Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2A

Asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input. After a valid value is obtained, print this number n squared.
*/


#include <iostream>
using namespace std;

int n;

int main()
{
  cout << "Please enter an integer: ";
  cin >> n;
  while ((n < 0) || (n > 100))
  {
    
    cout << "Please re-enter: ";
    cin >> n;
    }
  cout << (n * n) << endl;
 return 0; 
}