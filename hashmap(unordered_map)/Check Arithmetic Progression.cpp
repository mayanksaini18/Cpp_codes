/**
 * Given an array arr[] of integers. Write a program to check whether an arithmetic progression can be formed using all the given elements. 

Examples:

Input: arr[] = [0, 12, 4, 8]
Output: true
Explanation: Rearrange given array as [0, 4, 8, 12] which forms an arithmetic progression.
Input: arr[] = [12, 40, 11, 20]
Output: false
Explanation: there is no rearrangment which can forms an arithmetic progression.
Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 106
 */


 class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
    int n = arr.size();    
    sort(arr.begin(), arr.end());
    int diff = arr[1] - arr[0]; //common difference

    for (int i = 2; i < n; i++) {
        if (arr[i] - arr[i - 1] != diff) {
            return false;
        }
    }

    return true;
    }
};