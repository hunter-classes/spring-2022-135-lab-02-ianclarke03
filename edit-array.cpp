/*
Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2D

Creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
*/

#include <iostream>
using namespace std;

int myData[10];
int i;
int v;

for (int i=0; i<10; i++)
      {
        myData[i] = 1;
        }

int main()
{
  do
  {
    cout << myData[i] << " ";
    i++;
    cout << endl;
    /*cout << "Input index: ";
    cin >> i;
    cout << "Input value: ";
    cin >> v;
    myData[i] = v;
    cout << myData[];
    for (int i=0; i<10; i++)
      {
        cout << myData[i] << " ";
      */}
  } while(0 <= i < 10); 
    
  return 0;
}