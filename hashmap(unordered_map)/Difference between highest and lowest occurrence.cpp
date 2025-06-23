/**
 * Given an array, the task is to find the difference between the highest occurrence and lowest occurrence of any number in an array.
Note: If only one type of element is present in the array return 0

Examples:

Input: arr[] = [1, 2, 2]
Output: 1
Explanation:  Lowest occurring element (1) occurs once. Highest occurring element (2) occurs 2 times
Input: arr[] = [7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5]
Output: 2
Explanation : Lowest occurring element (2) occurs once. Highest occurring element (7) occurs 3 times
Constraints:
1<= arr.size() <=106
1<= arr[i] <=106
 */


 class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
       unordered_map <int , int> freq;
       for ( int  num :arr){
           freq[num]++;
       }
       
       int maxFreq = INT_MIN;
       int minFreq = INT_MAX;
       
       for ( auto frequency : freq){
           int f = frequency.second;
           if(f> maxFreq) maxFreq = f;
           if(f < minFreq) minFreq = f;
       }
       
       return maxFreq - minFreq;
    }
};