// WAP to copy all elements of one array to another
#include <iostream>
using namespace std;
int main()
{
  int array[5], coppy_arr[5], n;
  cout << "how many numbers :" << endl;
  cin >> n;
  // enter the numbers
  cout << "enter the numbers :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  // printing elements
  cout << "array elements are : ";
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
  // coppying elements
  for (int i = 0; i < n; i++)
  {
    coppy_arr[i] = array[i];
  }
  // printing coppied elements
  cout << "copied elements are : ";
  for (int i = 0; i < n; i++)
  {
    cout << coppy_arr[i] << " ";
  }
  cout << endl;
}
