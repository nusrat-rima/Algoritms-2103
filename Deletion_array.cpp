#include <iostream>
using namespace std;
void deletion_element(int a[], int &n, int position)
{
  if (position < 0 || position >= n)
  {
    cout << "invalid position" << endl;
  }
  for (int i = position; i < n - 1; i++)
  {
    a[i] = a[i + 1];
  }
  n--;
}
int main()
{
  int n;
  cout << "enter the number of elements :";
  cin >> n;
  int a[n];
  cout << "enter the elements of the array:";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int position;
  cout << "enter the position to delete :";
  cin >> position;
  deletion_element(a, n, position);
  cout << "array after deletion :";
  for (int i = 0; i < n; i++)
  {

    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}