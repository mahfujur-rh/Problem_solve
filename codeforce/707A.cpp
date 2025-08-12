#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b; cin >> a >> b;
    char cp;
    int done =0;
    for (int i = 0; i < a; i++)
    {
        for (int  j = 0; j < b; j++)
        {
           cin >> cp;
           if(cp=='C'||cp=='M'||cp=='Y') done = 1;

        }
        cout << "#" << (done? "Color" : "Black&White") << "\n";
        
    }
    
 
    return 0;
}