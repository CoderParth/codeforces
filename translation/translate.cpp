#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;

    cin >> s;
    cin >> t;

    reverse(s.begin(), s.end());

    (s == t) ? cout << "YES" << "\n" : cout << "NO" << "\n";
    return 0;
}