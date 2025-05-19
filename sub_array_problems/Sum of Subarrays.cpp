// Given an array arr. Find the sum of all subarrays of the array since the sum could be very large print the sum modulo (109+7).

// Examples:

// Input: arr[] = [1, 2, 3]
// Output: 20
// Explanation: All subarray sums are: [1] = 1, [2] = 2, [3] = 3, [1,2] = 3, [2,3] = 5, [1,2,3] = 6. Thus total sum is 1+2+3+3+5+6 = 20.

// Input: arr[] = [1, 3]
// Output: 8
// Explanation: All subarray sums are: [1] = 1 [3] = 3 [1,3] = 4. Thus total sum is 1+3+4 = 8.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints :
// 1 ≤ arr.size() ≤ 106
// 1 ≤ arr[i] ≤ 109


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
    int MOD = 1e9 + 7;
    int n = arr.size();
    long long total = 0 ;


    for (int i=0 ; i<n ; i++){
        // each elelmet arr[i] apperasa in (i+1) * (n-i) timees 
        total += (long long)arr[i] * (i+1) * (n-i);
    }
    return total % MOD;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        long long res = obj.subarraySum(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends