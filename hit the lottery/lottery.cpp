#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> bills = {1, 5, 10, 20, 100};
    int i = bills.size() - 1;
    int no_of_bills = 0;
    int total_money = 0;

    while(n != total_money) {
        if(bills[i] <= n && bills[i] + total_money <= n) {
            total_money += bills[i];
            no_of_bills++;
        } else {
            i--;
        }
    }

    cout << no_of_bills << "\n";
    return 0;
}