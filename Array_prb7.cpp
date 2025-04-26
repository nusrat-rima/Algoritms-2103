// finding the first and second largest element in array
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {12, 34, 65, 8, 9}, second_largest, largest;
  largest = arr[0];
  second_largest = -1;

  for (int i = 0; i < 5; i++)
  {
    if (largest < arr[i])
    {
      second_largest = largest;
      largest = arr[i];// for largest
    }
    else if (second_largest < arr[i] && largest != arr[i])
    {
      second_largest = arr[i];// for second largest
    }
  }

  cout << "Largest element is: " << largest << endl;
  if (second_largest == -1)
  {
    cout << "There is no second largest element." << endl; // If second_largest wasn't updated
  }
  else
  {
    cout << "Second largest element is: " << second_largest << endl;
  }
}