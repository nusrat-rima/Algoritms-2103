// linear search in Array
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {10, 3, 39, 9, 12, 78};
  int value, position = -1;
  cout << "enter the value you want to see :" << endl;
  cin >> value;
  for (int i = 0; i < 6; i++)
  {
    if (value == arr[i])
    {
      position = i + 1;
      break;
    }
  }
  if (position == -1)
  {
    cout << "the value is not found" << endl;
  }
  else
  {
    cout << "the value is found :" << value << endl
         << "at position " << position << endl;
  }
}
