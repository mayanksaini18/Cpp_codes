#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN
using namespace std;

int maxSumSubarrayK(const vector<int>& arr, int k) {
    int n = arr.size();
   
    int windowSum = 0;
    int maxSum = INT_MIN;

    // Calc sum of first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;


 


    int s = 1 , e = k;
    while ( e < n )
    {
       // get sum from [s...e] using sliding 
        windowSum =  windowSum - arr[s-1] + arr[e];
       
    if( windowSum > maxSum)
    {
     maxSum = windowSum;
    }
    s++ ; e++; 
    }



    // another way 
    
    // for (int i = k; i < n; i++) {
    //     windowSum += arr[i] - arr[i - k];
    //     maxSum = max(maxSum, windowSum);
    // }
    
    
    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Max sum of subarray of size " << k << " is: " << maxSumSubarrayK(arr, k) << endl;
    return 0;
}
