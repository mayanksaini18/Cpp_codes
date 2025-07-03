 
//  idea :  at each iteration compare adjacent elements and swap them if they are in the correct order 
 #include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                swap(arr[j], arr[j + 1]);
}
        }
    }
}
// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout <<arr[i] << " ";
    }
    cout << endl;
}
// Main function to test the bubble sort
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}