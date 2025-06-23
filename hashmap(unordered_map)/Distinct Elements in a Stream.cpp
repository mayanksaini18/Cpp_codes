/**
 * Given an array of integers arr[], the task is to return the no of distinct elements in subarray arr[0, i] for 0 <= i <arr.size().
The array will have positive and negative values. positive value means you have to append it into your data and negative value means you have to remove it from your data.
Note: If the element is not present in the data and you get the -ve of that element then no changes should occur.

Examples:

Input: arr[] = [5, 5, 7, -5, -7, 1, 2, -2]
Output: [1, 1, 2, 2, 1, 2, 3, 2]
Explanation: Proper adding and removal of intgers will give this output.
Input: arr[] = [9, 9, 3, -9, -3, -9]
Output: [1, 1, 2, 2, 1, 0]
Explanation: Proper adding and removal of intgers will give this output.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 ≤ arr.size() ≤ 106
-106 ≤ arr[i] ≤ 106
 */

 class Solution {
  public:
    vector<int> getDistinct(vector<int> &arr) {
        // code here
        unordered_map<int, int> freq;
        vector<int> result;

        for (int val : arr) {
            if (val > 0) {
                freq[val]++;
            } else if (val < 0) {
                int absVal = abs(val);
                if (freq.count(absVal) && freq[absVal] > 0) {
                    freq[absVal]--;
                    if (freq[absVal] == 0) {
                        freq.erase(absVal);
                    }
                }
            }

            result.push_back(freq.size()); // store distinct count
        }
        return result;
        
    }
};