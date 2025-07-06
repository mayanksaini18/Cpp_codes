// idea : We will divide the array into two halves till it contain 1 element, sort each half recursively, and then merge the sorted halves.
#include <iostream>
using namespace std;


// merge function to merge two subarrays
 void merge(int arr[], int left, int mid, int right) {
    int temp [right - left + 1];
     int p1= left , p2= mid + 1, p3= 0;

     while (p1 <= mid && p2 <= right) {
         if (arr[p1] <= arr[p2]) {
             temp[p3++] = arr[p1++];
         } else {
             temp[p3++] = arr[p2++];
         }
        }
    while (p1 <= mid) {
            temp[p3++] = arr[p1++];
     
        }
    while(p2 <= right) {
            temp[p3++] = arr[p2++];
        }
    // Copy the sorted elements back to the original array
    for (int i = 0; i < p3; i++) {
        arr[left +i] = temp[i];
    }
 }
 
// assume that arr[] is the array to be sorted, left is the starting index, and right is the ending index of the array.
 void MergeSort(int arr[], int left, int right) {
   
    if (left == right)  
    {
        return;
    }
    
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    
}

// Function to print the array
void printArray(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
// Main function to test the selection sort
int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Original array: ";

    printArray(arr, n);
    
    MergeSort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}