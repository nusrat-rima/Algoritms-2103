#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int data)
{
  int l, r, mid;
  l = 1; // l = begin,r= last
  r = n;
  while (l <= r)
  {
    mid = (l + r) / 2;
    if (data == arr[mid])
    {
      return mid;
    }
    else if (data > arr[mid])
    {
      r = mid + 1;
    }
    else
    {
      l = mid - 1;
    }
  }

  if (r > l)
  {
    cout << "data is not found" << endl;
  }
}
int main()
{
  int arr[] = {50, 40, 30, 20, 10};
  int n = 5;
  int data;
  cout << "Enter the item you want to search :" << endl;
  cin >> data;
  int result = binary_search(arr, n, data);
  cout << "position is :" << result + 1;
}
