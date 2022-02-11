/*
Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2C

Creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
*/

#include <iostream>
using namespace std;

int myData[10];
int i;
int v;


int main()
{
  for (int i=0; i<10; i++)
      {
        myData[i] = 1;
        cout << myData[i] << " ";
        }
  cout << endl;
  do
  {
    //cout << myData[i] << " ";
    //cout << endl;
    
    cout << "Input index: ";
    cin >> i;
    cout << "Input value: ";
    cin >> v;
    
    myData[i] = v;
    for (int i=0; i<10; i++)
      {
        cout << myData[i] << " ";
        }
    cout << endl;

    if (i < 0 || i > 9)
    {
      cout << "Index out of range. Exit.";
      break;
    }
    
  } while(0 <= i < 10); 
    
  return 0;
}
