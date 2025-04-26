#include <iostream>
using namespace std;
void display_arr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[100] = {7, 8, 12, 27, 88};
  int size = 5;
  int element, index;
  cout << "enter the element you wanna delete :" << endl;
  cin >> element;
  cout << "enter index no :" << endl;
  cin >> index;
  cout << "before deletion :" << endl;
  display_arr(arr, size);
  for (int i = index; i < size - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  size--;
  cout << "after deletion :" << endl;
  display_arr(arr, size);
  return 0;
}