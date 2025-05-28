#include <iostream>
using namespace std;

void display_arr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low + 1;
  int j = high;
  int temp;
  do
  {
    while (arr[i] <= pivot && i <= high)
    {
      i++;
    }
    while (arr[i] > pivot && j >= low)
    {
      j--;
    }
    if (i < j)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  while(i<j);
  temp
}

int main()
{
  int arr[] = {12, 3, 4, 1, 34};
  int n = 5;
  cout << "Array before sorting: " << endl;
  display_arr(arr, n);

  cout << "Array after sorting: " << endl;
  (arr, 0, n - 1);
  display_arr(arr, n);
}