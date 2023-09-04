#include <iostream>
#include <vector>

using namespace std;

bool hasVikaLikesCarpet(const vector<string>& carpet) {
    int n = carpet.size();
    int m = carpet[0].size();

    for (int c1 = 0; c1 < m; ++c1) {
        for (int c2 = c1 + 1; c2 < m; ++c2) {
            for (int c3 = c2 + 1; c3 < m; ++c3) {
                for (int c4 = c3 + 1; c4 < m; ++c4) {
                    bool foundV = false, foundI = false, foundK = false, foundA = false;

                    for (int r = 0; r < n; ++r) {
                        if (!foundV && carpet[r][c1] == 'v') foundV = true;
                        if (!foundI && carpet[r][c2] == 'i') foundI = true;
                        if (!foundK && carpet[r][c3] == 'k') foundK = true;
                        if (!foundA && carpet[r][c4] == 'a') foundA = true;
                    }

                    if (foundV && foundI && foundK && foundA) {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i];
        }

        if (hasVikaLikesCarpet(carpet)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
