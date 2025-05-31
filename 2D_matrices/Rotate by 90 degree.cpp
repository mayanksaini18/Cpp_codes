// Given a square matrix mat[][] of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. 

// Examples:

// Input: mat[][] = [[1, 2, 3],
//                 [4, 5, 6]
//                 [7, 8, 9]]
// Output: Rotated Matrix:
// [3, 6, 9]
// [2, 5, 8]
// [1, 4, 7]
// Input: mat[][] = [[1, 2],
//                 [3, 4]]
// Output: Rotated Matrix:
// [2, 4]
// [1, 3]
// Constraints:
// 1 ≤ n ≤ 102
// 0 <= mat[i][j] <= 103



class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        //  Transpose
        int n = mat.size();
        int m = mat[0].size();
        for ( int i=0;i<n ; i++){
            for(int j = i+1  ; j<n ; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        // Step2 Reverse columns
        for (int j = 0; j < n; j++) {
            int top = 0, bottom = n - 1;
            while (top < bottom) {
                swap(mat[top][j], mat[bottom][j]);
                top++;
                bottom--;
            }
        }
    }
};
