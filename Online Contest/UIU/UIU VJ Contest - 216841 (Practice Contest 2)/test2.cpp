/***RUSLAN02 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    string s;
    cin >> n >> s;
    int d = 0, mx = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] != '?' && s[i] == s[i - 1]) {
            cout << "No";
            return 0;
        }
        if (s[i] == '?') {
            ++d;
            if (i + 1 < n && s[i - 1] == s[i + 1]) mx = INT_MAX;
        } else {
            mx = max(mx, d);
            d = 0;
        }
    }
    mx = max(mx, d);

    if (mx > 1 || s[n - 1] == '?' || s[0] == '?') {
        cout << "Yes";
    }
    else {
        cout << "No";
    }


    return 0;
}
