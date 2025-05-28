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
int partition(int A[], int low, int high)
{
  int pivot = A[low]; 
  int i = low + 1;    // Start i from the element next to pivot
  int j = high;       // Start j from the end of the array
  int temp;

  do
  {
    // Move i forward while A[i] is smaller than or equal to the pivot
    while (A[i] <= pivot && i <= high)
    {
      i++;
    }

    // Move j backward while A[j] is greater than the pivot
    while (A[j] > pivot && j >= low)
    {
      j--;
    }

    // If i < j, swap A[i] and A[j]
    if (i < j)
    {
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
  } while (i < j);

  // Swap pivot A[low] with A[j]
  temp = A[low];
  A[low] = A[j];
  A[j] = temp;
  return j; // Return the partition index
}

void quickSort(int A[], int low, int high)
{
  int partitionIndex; 
  if (low < high)
  {
    partitionIndex = partition(A, low, high); // Partitio n the array
    quickSort(A, low, partitionIndex - 1);    // Sort the left subarray
    quickSort(A, partitionIndex + 1, high);   // Sort the right subarray
  }
}

int main()
{
  int A[] = {9, 4, 4, 8, 7, 5, 6};
  int n = 7; 
  printArray(A, n);
  quickSort(A, 0, n - 1);
  printArray(A, n);

  return 0;
}
