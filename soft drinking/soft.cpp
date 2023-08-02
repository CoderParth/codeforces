#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalSlices = c * d;
    int ml = (k * l)/ nl;
    int salt = p / np;

    vector<int> t;

    t.push_back(ml);
    t.push_back(totalSlices);
    t.push_back(salt);

    sort(t.begin(), t.end());

    cout << (t[0] / n) << "\n";

    return 0;
}