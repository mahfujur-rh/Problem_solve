#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;cin>>t;
    while (t--)
    {
        int n;string s;
        cin >> n>> s;
        int count[26]={0};
        int balloons = 0;
            for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (count[ch - 'A'] == 0) {
                balloons += 2; 
                count[ch - 'A'] = 1;
            } else {
                balloons += 1; 
            }
        }
        cout << balloons << endl;

        
    }
    

 return 0;
}