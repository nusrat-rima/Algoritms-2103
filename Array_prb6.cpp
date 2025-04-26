// maximum and minimum number in array
#include <iostream>
using namespace std;
int main()
{
  int array[10], n;
  cout << "how many numbers :" << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  int largest = array[0];
  for (int i = 1; i < n; i++)
  {
    if (largest < array[i])
    {
      largest = array[i];
    }
  }
  int lowest = array[0];
  for (int i = 0; i < n; i++)
  {
    if (lowest > array[i])
    {
      lowest = array[i];
    }
  }
  cout << "Largest value is : " << largest << endl;
  ;
  cout << "Lowest value is : " << lowest << endl;
}