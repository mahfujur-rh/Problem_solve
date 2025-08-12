#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;cin >> n >> h;
    int done=0;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>h)
        done+=2;
        else done +=1;
    }
    cout << done <, endl;
    

    return 0;
}