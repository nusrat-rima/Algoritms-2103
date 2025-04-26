// WAP to find average of n numbers using arrays
#include <iostream>
using namespace std;
int main()
{
  int arr[10], n, sum = 0;
  cout << "how many elements :" << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "printing elements for array :" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  // sum of elements
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  cout << "sum is " << sum << endl;
  cout << "average is " << (float)sum / 5;
}