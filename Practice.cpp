// #include <iostream>
// using namespace std;
/*void display_arr(int arr[], int size);
int main()
{
  int arr[10] = {10, 20, 30, 40, 50};
  int size = 5;
  int new_element = 25;
  int index = 5;
  int position;
  cout << "enter your position" << endl;

  cout << "before insertion :" << endl;
  display_arr(arr, size);
  if ()

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
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  int f = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int s;
  cin >> s;

  for (int i = 0; i < n; i++)
  {
    if (a[i] == s)
    {
      cout << "Found the element at index:" << i << endl;
      break;
    }
    f++;
  }
  if (f == n)
  {
    cout << "Not found" << endl;
     
  }

  return 0;
}
