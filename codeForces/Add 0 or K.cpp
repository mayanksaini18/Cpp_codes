

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

       
        for (int i = 0; i < n; i++) {
            if (a[i] % k != 0) {
                a[i] += (k - (a[i] % k));
            }
        }

        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
