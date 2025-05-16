#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadaneMaxSubarraySum( vector<int>& arr) {
    int max = INT_MIN;
    int sum = 0;
    int n = arr.size();

    for (int x = 0; x<n ; x++) {
        sum += arr[x];
        if (max < sum)
            max = sum;

        if (sum < 0)
            sum = 0;
    }

    return max;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum is: " << kadaneMaxSubarraySum(arr);
    return 0;
}
