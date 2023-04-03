#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> x(n), y(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }

        unordered_map<double, int> mp;
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            if (x[i] == 0 && y[i] == 0) {
                zeros++;
                continue;
            }
            if (x[i] != 0) {
                double a = -((double)y[i] / (double)x[i]);
                mp[a]++;
            }
        }

        int max_freq = 0;
        for (auto it : mp) {
            max_freq = max(max_freq, it.second);
        }

        cout << max_freq + zeros << endl;
    }

    return 0;
}
