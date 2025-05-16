#include <iostream>
#include <vector>
using namespace std;

long long sumOfAllSubarrays(const vector<int>& arr){
    int n = arr.size();
    long long total = 0 ;


    for (int i=0 ; i<n ; i++){
        // each elelmet arr[i] apperasa in (i+1) * (n-i) timees 
        total += (long long)arr[i] * (i+1) * (n-i);
    }
    return total;
}

int main (){
    vector<int>arr = {1,2,3};
    cout << "sum af all subarrays : " << sumOfAllSubarrays(arr);
    return 0 ; 

}




// Time Complexity	O(n)
// Space Complexity	O(1)