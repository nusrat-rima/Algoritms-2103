// WAP to seperate odd and even integers into seperate arrays
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter numbers :";
  cin >> n;
  int arr[n], odd_arr[n], even_arr[n];
  int odd_count = 0, even_count = 0;
  cout << "enter the elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // seperate the numbers
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      even_arr[even_count++] = arr[i];
    }
    else
    {
      odd_arr[odd_count++] = arr[i];
    }
  }
  // printing even numbers
  cout << "printing even numbers :";
  for (int i = 0; i < even_count; i++)
  {
    cout << even_arr[i] << " ";
  }
  cout << endl;
  // printing odd numbers
  cout << "printing odd numbers :";
  for (int i = 0; i < odd_count; i++)
  {
    cout << odd_arr[i] << " ";
  }
  cout << endl;

  return 0;
}