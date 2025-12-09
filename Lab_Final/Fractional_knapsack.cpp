//mahfujurrahman
// Fractional Knapsack: sort by value/weight ratio and take items greedily.



#include <bits/stdc++.h>
using namespace std;

void masur(int n, float value[], float weight[], float capacity) {

    int index[n];

    for (int i = 0; i < n; i++) index[i] = i;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            float r1 = value[index[i]] / weight[index[i]];
            float r2 = value[index[j]] / weight[index[j]];
            if (r1 < r2) {
                swap(index[i], index[j]);
            }
        }
    }

    float totalvalue = 0.0;

  cout << "Items taken (value, weight taken):\n";

    for (int i = 0; i < n && capacity > 0; i++) {
        int item = index[i];

        if (weight[item] <= capacity) {
            capacity -= weight[item];
            totalvalue += value[item];
            cout << value[item] << "   " << weight[item] << endl;
        } else {
            float frac = capacity / weight[item];
            totalvalue += value[item] * frac;
            cout << value[item] << " " << capacity ;
            capacity = 0;
        }
    }

    cout << " MAXIMUM TOTAL VALUE: " << totalvalue << endl;
}

int main() {
    float value[] = {60, 180, 200};
    float weight[] = {20, 30,50};
    int n = 3;
    float capacity = 80;

    masur(n, value, weight, capacity);

    return 0;
}
