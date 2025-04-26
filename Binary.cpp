#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int data)
{
  int l, r, mid;
  l = 0;
  r = n - 1;
  while (l <= r)
  {
    mid = (l + r) / 2;
    if (data == arr[mid])
    {
      return mid;
    }
    else if (data > arr[mid])
    {
      l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
  }

  if (l > r)
  {
    cout << "data is not found" << endl;
  }
}
int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int n = 5;
  int data;
  cout << "Enter the item you want to search :" << endl;
  cin >> data;
  int result = binary_search(arr, n, data);
  cout << "position is :" << result + 1;
}
