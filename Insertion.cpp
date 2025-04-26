#include <iostream>
using namespace std;
void display_array(int arr[], int size);
int main()
{
  int arr[10] = {7, 8, 12, 27, 88};
  int size = 5, new_element = 45, index = 3;
  cout << "before insertion:" << endl;
  display_array(arr, size);
  for (int i = size; i >= index; i--)
  {
    // arr[i] = arr[i - 1];
    arr[i + 1] = arr[i];
  }
  arr[index] = new_element;
  size += 1;
  cout << "after insertion:" << endl;
  display_array(arr, size);
}
void display_array(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}