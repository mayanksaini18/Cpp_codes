// Given an array of integers arr, return true if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays are equal. If it is not possible then return false.

// Examples:

// Input: arr = [1, 2, 3, 4, 5, 5]
// Output: true
// Explanation: In the above example, we can divide the array into two subarrays with equal sum. The two subarrays are: [1, 2, 3, 4] and [5, 5]. The sum of both the subarrays are 10. Hence, the answer is true.
// Input: arr = [4, 3, 2, 1]
// Output: false
// Explanation: In the above example, we cannot divide the array into two subarrays with equal sum. Hence, the answer is false.
// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)

//  Constraints: 
// 1<=arr.size()<=105 
// 1<=arr[i]<=106



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        long totalSum=0;
        for( int i = 0 ; i < arr.size() ; i++){
            totalSum+=arr[i];
        }
        long pfright=0;
        long pfleft =0;
        for (int i =0 ; i<arr.size() ; i++){
            pfleft+=arr[i];
            pfright = totalSum-pfleft;
            
            if ( pfleft == pfright )
            return true;
        }
        
        return false ;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends