#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;

    cin >> n >> k;

    int total_time = 240;

    int time_remaining = total_time - k;

    int time_to_solve = 0;
    int ans = 0;

    int i = 1;
    while(i <= n && (time_to_solve  + (5 * i) <= time_remaining)) {
        time_to_solve += (5 * i);
        i++;
        ans++;
    }


    cout << ans << "\n";
    return 0;
}