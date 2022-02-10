// arrays

#include <iostream>
using namespace std;

int myData[10];

int main()
{
  for (int n=0; n<10; n++)
    {
      myData[n] = 1;
      cout << myData;
    }
  /*do
  {
    cout << myData[i] << endl;
    cout << "Input cell index"<< endl;
    int i;
    cin >> i;
  }while();
*/
  return 0;
}