// arrays

#include <iostream>
using namespace std;

int myData[10];
int i;
int v;

int main()
{
  do
  {
    for (int i=0; i<10; i++)
      {
        myData[i] = 1;
        cout << myData[i] << " ";
      }
    cout << endl;
    cout << "Input index: ";
    cin >> i;
    cout << "Input value: ";
    cin >> v;
    myData[i] = v;
    //cout << myData[];
  } while(0 <= i < 10); 
    
  return 0;
}