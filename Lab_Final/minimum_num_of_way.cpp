#include<bits/stdc++.h>
using namespace std;

#define mx 1000
int dp[mx][mx];

int counts(int coins[], int n, int target_amount)
{
    if (target_amount == 0) 
        dp[n][target_amount] = 1;

    if (target_amount < 0 || n == 0) 
        dp[n][target_amount] = 0;

    if(dp[n][target_amount] == -1)
        dp[n][target_amount] = counts(coins, n, target_amount - coins[n-1]) + 
                               counts(coins, n - 1, target_amount);

    return dp[n][target_amount];
}

int main()
{
    int coins[] = {1, 2, 3};
    int n = 3;
    int target_amount = 5;

    memset(dp, -1, sizeof(dp));

    cout << counts(coins, n, target_amount) << endl;

    return 0;
}
