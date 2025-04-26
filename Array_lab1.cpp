#include <iostream>
using namespace std;
int main()
{
  int arr[] = {5, 2, 8, 3, 1, 9, 4};
  int maximum;
  maximum = arr[0];
  for (int i = 0; i < 6; i++)
  {
    if (maximum < arr[i])
    {
      maximum = arr[i];
    }
  }
  cout << "maximum value is " << maximum << endl;
}