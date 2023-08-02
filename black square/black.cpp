#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    unordered_map<int, int> map;

    map['1'] = a;
    map['2'] = b;
    map['3'] = c;
    map['4'] = d;

    int total = 0;

    for(int i = 0; i < s.size(); ++i) {
        total += map[s[i]];
    }

    cout << total << "\n";
    return 0;
}