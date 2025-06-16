/**
 * Given an array of elements occurring in multiples of k, except one element which doesn't occur in multiple of k. Return the unique element.

Examples:

Input: k = 3, arr[] = [6, 2, 5, 2, 2, 6, 6]
Output: 5
Explanation: Every element appears 3 times except 5.
Input: k = 4, arr[] = [2, 2, 2, 10, 2]
Output: 10
Explanation: Every element appears 4 times except 10.
Expected Time Complexity: O(n* log(arr[i]))
Expected Auxiliary Space: O(log(arr[i]))

Constraints:
3<= arr.size()<=2*105
2<= k<=2*105
1<= arr[i]<=109
 */


 class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
         unordered_map <int , int> freq;
       for ( int  num :arr){
           freq[num]++;
       }
       for (auto entry : freq){
           if(entry.second == 1){
               return entry.first;
           }
       }
       return -1;
    }
};