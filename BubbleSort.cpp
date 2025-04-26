#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
  int temp;
  for (int i = 0; i < n - 1; i++) // for number of pass
  {
    for (int j = 0; j < n - 1 - i; j++) // for number of each comparisions
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void display_arr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << " ";
}

int main()
{
  int arr[] = {12, 4, 6, 7, 34};
  int n = 5;
  cout << "Array before sorting: " << endl;
  display_arr(arr, n);
  cout << endl;

  cout << "Array after sorting: " << endl;
  bubbleSort(arr, n);
  display_arr(arr, n);

  return 0;
}