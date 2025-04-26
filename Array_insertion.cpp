#include <iostream>
using namespace std;
void display_arr(int arr[], int size);
int main()
{
  int arr[10] = {10, 20, 30, 40, 50};
  int size = 5;
  int new_element = 25;
  int index = 3;
  cout << "before insertion :" << endl;
  display_arr(arr, size);
  for (int i = size; i >= index; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[index] = new_element;
  size++;
  cout << "after insertion :" << endl;
  display_arr(arr, size);
}
void display_arr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}