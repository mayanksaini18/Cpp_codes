#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        if (b == n) {
            cout << "YES\n";
        } else if (a + b <= n + 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
