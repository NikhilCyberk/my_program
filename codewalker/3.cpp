#include<bits/stdc++.h>
using namespace std;

double calc(double A, vector<int> X, vector<int> Y) {
    int n = X.size();
    int count = 0;
    for(int i = 0; i < n; i++) {
        double temp = A * X[i] + Y[i];
        if(temp == 0) count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> X(n), Y(n);
        for(int i = 0; i < n; i++) {
            cin >> X[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        double ans = 0;
        for(int i = 0; i < n; i++) {
            if(X[i] != 0) {
                double A = -(double)Y[i]/X[i];
                ans = max(ans, calc(A, X, Y));
            }
        }
        cout << (int)ans << endl;
    }
    return 0;
}
