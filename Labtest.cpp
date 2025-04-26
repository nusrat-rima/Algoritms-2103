#include <iostream>
using namespace std;
// void display_arr(int arr[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

void display_arr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << " ";
}
void bubbleSort(int arr[], int n)
{
  int temp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
      if (arr[j] > arr[j + 1])
      {
        {
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
  }
}

int main()
{
  int arr[] = {11, 22, 389, 33, 440, 44, 5, 60, 66, 77, 80, 88, 99};
  int n = sizeof(arr) / sizeof(int);
  cout << "Array before sorting: " << endl;
  display_arr(arr, n);
  cout << "after sorting :" << endl;
  bubbleSort(arr, n);
  display_arr(arr, n);
}
