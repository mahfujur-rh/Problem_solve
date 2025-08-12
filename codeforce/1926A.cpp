#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int code = 0;
       for (int  i = 0; i < 5; i++)
       {
        char cp;
        cin >> cp;
        code+=(cp=='A');
        code-=(cp=='B');
        if (code>0)
        cout << "A";
        else cout << "B";
        cout << "\n";
        
       }
       
       
    }
    



    return 0;

}