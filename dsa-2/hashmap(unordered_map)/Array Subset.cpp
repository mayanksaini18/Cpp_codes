// Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

// Examples:

// Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
// Output: true
// Explanation: b[] is a subset of a[]
// Input: a[] = [1, 2, 3, 4, 4, 5, 6], b[] = [1, 2, 4]
// Output: true
// Explanation: b[] is a subset of a[]
// Input: a[] = [10, 5, 2, 23, 19], b[] = [19, 5, 3]
// Output: false
// Explanation: b[] is not a subset of a[]
// Constraints:
// 1 <= a.size(), b.size() <= 105
// 1 <= a[i], b[j] <= 106

class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
    unordered_map<int, int> freqA;

        // Count frequencies of elements in a
        for (int num : a) {
            freqA[num]++;
        }

        // Check if all elements of b exist in required count
        for (int num : b) {
            if (freqA[num] == 0) {
                return false; //  not present
            }
            freqA[num]--; // Use one occurrence
        }

        return true;
    }
};





