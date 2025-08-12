#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, t, curr;
    cin >> n >> t;

    for (int i = 0; i<n; i++) {
        cin>>curr;
        t -= (86400 - curr);
        if (t<1) {
            cout << i+1;
            break;
        }
    }

    return 0;
}
