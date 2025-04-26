// WAP to add two matrices
#include <iostream>
using namespace std;
int main()
{
  int a[2][2], b[2][2];
  cout << "enter elements for matrix a :" << endl;
  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      cout << "a[" << row << "][" << col << "] = ";
      cin >> a[row][col];
    }
  }
  cout << "enter elements for matrix b :" << endl;
  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      cout << "b[" << row << "][" << col << "] = ";
      cin >> b[row][col];
    }
  }
  cout << "printing a matirx :" << endl;

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      cout << a[row][col] << " ";
    }
    cout << endl;
  }
  cout << "printing b matirx :" << endl;

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      cout << b[row][col] << " ";
    }
    cout << endl;
  }
  // sum of a and b matrix
  cout << "matrix (a + b) :" << endl;
  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      cout << a[row][col] + b[row][col] << " ";
    }
    cout << endl;
  }
  return 0;
}