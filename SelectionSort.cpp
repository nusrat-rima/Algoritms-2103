#include <iostream>
using namespace std;
void printArray(int A[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
}
void selectionSort(int A[], int n)
{
  int indexOfMin, temp;
  cout << "Running Selection sort..." << endl;

  for (int i = 0; i < n - 1; i++)
  {
    indexOfMin = i;
    for (int j = i + 1; j < n; j++)
    {
      if (A[j] < A[indexOfMin])
      {
        indexOfMin = j;
      }
    }

    temp = A[i];
    A[i] = A[indexOfMin];
    A[indexOfMin] = temp;
  }
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int A[n];
  cout << "Enter " << n << " elements:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  cout << "Original array: ";
  printArray(A, n);
  selectionSort(A, n); 
  cout << "Sorted array: ";
  printArray(A, n); 

  return 0;
}
