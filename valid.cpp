// valid

#include <iostream>
using namespace std;

int n;
cout << "Please enter an integer:";
cin >> n;

int main()
{
  if ((n <= 0) || (n>=100))
  {
    cout << "Please re-enter:";
    cin >> n;
  }
  else
    cout << (n * n);
}