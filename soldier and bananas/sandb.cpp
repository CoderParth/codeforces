#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;

    cin >> k >> n >> w;

    int totalcost = 0;
    int initial = 1;

    for(int i = 0; i < w; i++) {
        totalcost += initial * k;
        initial++;
    }

    int moneyToBorrow = totalcost - n; 

    (moneyToBorrow > 0) ? cout << moneyToBorrow << "\n" : cout << 0 << "\n";

    return 0;
}