//Q(s, e, v)
void applyRangeUpdates(vector<int>& arr, vector<tuple<int, int, int>>& queries) {
    int n = arr.size();
    vector<int> diff(n + 1, 0);

    for (auto [s, e, v] : queries) {
        diff[s] += v;
        if (e + 1 < n)
            diff[e + 1] -= v;
    }

    arr[0] = diff[0];
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] + diff[i];
    }
}
