#include <iostream>
using namespace std;

int main()
{
  // int arr[] = {5, 2, 10, 6, 7, 13};
  int n, item, loc = 0;
  cout << "How many elements :" << endl;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "displaying elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Enter the item you want to search :" << endl;
  cin >> item;
  for (int i = 0; i < n; i++)
  {
    if (item == arr[i])
    {
      loc = i + 1;
      break;
    }
  }
  if (loc == 0)
  {
    cout << "item is not found !" << endl;
  }
  else
  {
    cout << "the item is found at location :" << " " << loc;
  }

  return 0;
}