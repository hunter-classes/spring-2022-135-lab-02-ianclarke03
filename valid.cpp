// valid

#include <iostream>
using namespace std;

int n;
cin >> n;
cout << "Please enter an integer:";


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