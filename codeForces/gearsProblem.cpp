#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        bool ok = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
