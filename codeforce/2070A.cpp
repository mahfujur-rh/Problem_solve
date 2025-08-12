#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long count = (n / 15) * 3;

        for (int i = 0; i <= n % 15; ++i) {
            if (i % 3 == i % 5)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
