// Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
// Note: The input strings may contain leading zeros but the output string should not have any leading zeros.

// Input: s1 = "1101", s2 = "111"
// Output: 10100
// Explanation:
//  1101
// + 111
// 10100
// Input: s1 = "00100", s2 = "010"
// Output: 110
// Explanation: 
//   100
// +  10
//   110
// Constraints:
// 1 ≤s1.size(), s2.size()≤ 106

// Expected Complexities
// Time Complexity: O(n)
// Auxiliary Space: O(n)




// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string result= "";
        int i = s1.length()-1;
        int j = s2.length()-1;
        int carry = 0;
     
        while ( i >=0 || j >=0 || carry ){
            int bit1 =( i>=0) ? s1[i]-'0' : 0;
            int bit2 =( j>=0) ? s2[j]-'0' : 0;
            // This converts a character digit to an integer. 
            // For example, if s1[i] is '1', '1' - '0' gives 1.
            // If s1[i] is '0', '0' - '0' gives 0.
            
            int sum = bit1 + bit2 + carry;
            result += (sum % 2) + '0';   // add the binary digit to result
            carry = sum / 2;             
           i--;
           j--;
        }
        reverse(result.begin(), result.end());  // reverse the string => to correct the order
        
        //for removing leading zeros
        int start = 0;
        while (start < result.length() && result[start] == '0') {
            start++;
        }
        
        if(start == result.length()) return " 0" ;
        
        string cleanResult="";
        for(int k = start ; k <result.length() ; k++){
             cleanResult += result[k];
        }
        
        return cleanResult;
        
        
    }
};