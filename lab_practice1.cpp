// Deletion element fom an array
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
  int arr[10] = {10, 20, 35, 30, 70, 40, 60};
  int size = 7;
  int item;
  int index_no;
  cout << "enter the value you want to delete :" << endl;
  cin >> item;
  cout << "enter index no :" << endl;
  cin >> index_no;
  cout << "before insertion :" << endl;
  display_arr(arr, size);
  for (int i = index_no; i < (size - 1); i++)
  {
    arr[i] = arr[i + 1];
  }
  size = size - 1;
  display_arr(arr, size);
}

