#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;

    unordered_set<char> distinct;

    for(char c : s) {
        distinct.insert(c);
    }

    (distinct.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!" << "\n";

    return 0;

}