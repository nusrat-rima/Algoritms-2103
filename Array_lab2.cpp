// find the second largest element from an array
#include <iostream>
using namespace std;
int main()

{
  int arr[] = {12, 34, 65, 8, 9};
  int largest, second_largest;
  largest = 0;
  for (int i = 0; i < 5; i++)
  {
    if (largest < arr[i])
    {
      largest = arr[i];
    }
  }
  cout<<"largest element is :"<<largest;
  second_largest = 0;
  for (int i = 0; i < 5; i++)
  {
    if (second_largest < arr[i] && largest != arr[i])
    {
      second_largest = arr[i];
    }
  }
  cout << "second largest element is : " << second_largest << endl;
}