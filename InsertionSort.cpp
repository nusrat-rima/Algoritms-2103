#include <iostream>
using namespace std;

void printArray(int Arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}

// Function to sort the array using insertion sort algorithm
void insertionSort(int Arr[], int n)
{
  int key, j;

  // Outer loop for passes — starts from the second element (index 1)
  for (int i = 1; i < n; i++)
  {
    key = Arr[i]; // Store the current element (the one to be inserted)
    j = i - 1;    // Set j to the index before i

    // Inner loop: shift elements greater than key one position to the right
    while (j >= 0 && Arr[j] > key)
    {
      Arr[j + 1] = Arr[j]; // Move the greater element one step to the right
      j--;                 // Move to the previous index
    }

    // Insert the key at its correct position
    Arr[j + 1] = key;
  }
}

int main()
{

  int Arr[] = {12, 54, 65, 7, 23, 9};
  int n = 6;
  printArray(Arr, n);
  insertionSort(Arr, n);
  printArray(Arr, n);

  return 0;
}
