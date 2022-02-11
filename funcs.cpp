#include <iostream>
using namespace std;

void print_interval (int L, int U)
{
  do{
    cout << L << " ";
    L++;
  } while (L < U + 1);
}