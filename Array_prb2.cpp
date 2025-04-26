// WAP ro find sum of arrays elements
#include <iostream>
using namespace std;
int main()
{
  int arr[5], sum = 0;
  cout << "enter elements for array :" << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }
  cout << endl;
  // sum of elements
  for (int i = 0; i < 5; i++)
  {
    sum = sum + arr[i];
  }
  cout << "sum is " << sum << endl;
  cout << "average is " << (float)sum / 5;
}