#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int total_minutes_in_day = 24 * 60;

    while(t--) {
        int h, m;
        cin >> h >> m;

        int total_away_mins = h * 60 + m;
        int total_away = total_minutes_in_day - total_away_mins;
        cout << total_away << "\n";
    }
    return 0;
}