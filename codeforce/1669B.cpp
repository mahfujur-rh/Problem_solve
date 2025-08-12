#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,curr;
        cin >>n;
        int val=-1;

        unordered_map<int, int> done;

        for (int i = 0; i < n; i++)
        {
            cin >> curr;
            done[curr]++;
            if (done[curr]==3)
            {
                val=curr;
            }



        }
         cout << val << "\n";


    }




    return 0;
}
