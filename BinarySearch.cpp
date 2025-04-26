#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int element)
{
  int low, mid, high;
  low = 0;
  high = size - 1;
  // start searching
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (arr[mid] == element)
    {
      return mid;
    }
    else if (arr[mid] < element)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  // searching ends
  return -1;
}
int main()
{
  int arr[] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
  int size = sizeof(arr) / sizeof(int);
  int element;
  cout << "enter the element you want to search :";
  cin >> element;
  int searchIndex = binarySearch(arr, size, element);
  if (searchIndex != -1)
  {
    cout << "the element is " << element << " " << "is found at index :" << searchIndex + 1;
  }
  else
  {
    cout << "The element is not found" << endl;
  }

  return 0;
}