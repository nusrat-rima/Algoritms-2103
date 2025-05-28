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

void merge(int A[], int mid, int low, int high)
{
  int i, j, k;
  int B[100]; // Temporary array to hold merged values
  i = low;
  j = mid + 1;
  k = low;

  // Merge two sorted subarrays (A[low..mid] and A[mid+1..high])
  while (i <= mid && j <= high)
  {
    if (A[i] < A[j])
    {
      B[k] = A[i];
      i++;
      k++;
    }
    else
    {
      B[k] = A[j];
      j++;
      k++;
    }
  }

  // If there are any remaining elements in the left subarray
  while (i <= mid)
  
    B[k] = A[i];
    k++;
    i++;
  }

  // If there are any remaining elements in the right subarray
  while (j <= high)
  {
    B[k] = A[j];
    k++;
    j++;
  }

  // Copy the merged elements back into the original array
  for (int i = low; i <= high; i++)
  {
    A[i] = B[i];
  }
}

void mergeSort(int A[], int low, int high)
{
  int mid;
  if (low < high)
  {
    mid = (low + high) / 2;
    mergeSort(A, low, mid);      // Sort the left half
    mergeSort(A, mid + 1, high); // Sort the right half
    merge(A, mid, low, high);    // Merge the sorted halves
  }
}

int main()
{

  int A[] = {9, 1, 4, 14, 4, 15, 6};
  int n = 7;
  printArray(A, n);
  mergeSort(A, 0, n - 1);
  printArray(A, n);
  return 0;
}
