#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int i = 1;
    while (n>0)
    {
       n-=i;
       i++;
    }
    if(n) cout << "No" << endl;
    else cout << "Yes" << endl;
  return 0;   
}
