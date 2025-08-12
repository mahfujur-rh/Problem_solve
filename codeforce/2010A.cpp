#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, curr;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> curr;
            if (i % 2 ==0)
                sum -= curr;
            else
                sum += curr;
        }
        cout << sum;

        return 0;
    }
}
