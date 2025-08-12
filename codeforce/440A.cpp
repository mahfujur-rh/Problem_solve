#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n,curr;cin>>n;
    long long sum=0;
    for (int i = 0; i < n-1; i++)
    {
        cin>>curr;
        sum+=curr;
    }
    cout << (n*(n+1)/2)-sum << endl;

 return 0;
}