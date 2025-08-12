#include <bits/stdc++.h>
using namespace std;
 int main (){
   int t;cin >> t;
   while (t--)
   {
     char msr;
     string done ="";
     for (int  i = 0; i < 8; i++)
     {
      for (int  j = 0; j <8; j++)
      {
         cin >> msr;
         if (msr!='.')
         {
           done += msr;
         }
         
      }
      
     }
     cout << done << endl;
     
   }
   

    return 0;
 }