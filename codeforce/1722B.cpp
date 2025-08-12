#include <bits/stdc++.h>
using namespace std;


char normalize(char c) {
    if (c == 'G' || c == 'B') return 'X';
    return c;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        string row1, row2;
        cin >> row1 >> row2;

        bool same = true;
        for (int i = 0; i < n; ++i) {
            if (normalize(row1[i]) != normalize(row2[i])) {
                same = false;
                break;
            }
        }

        if (same) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
