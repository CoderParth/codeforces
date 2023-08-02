#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> characters(26, false);

    for(int i = 0; i < n; ++i) {
        char c = tolower(s[i]);
        characters[c - 'a'] = true;
    }

    bool pangram = true;
    for(bool j : characters) {
        if(!j) {
            pangram = false;
            cout << "NO" << "\n";
            break;
        }
    }

    if(pangram) cout << "YES" << "\n";
    return 0;
}