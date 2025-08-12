#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,curr,done=0;cin>>n;
    unordered_map<int,int>test;
    for (int  i = 0; i < n; i++)
    {
        cin >>curr;
        if ((!curr)||test[curr]) continue;
           test[curr]=1;
           done++;
        
        
    }
    cout << done;
    

 return 0;
}