#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> letters;

    for(char c : s) {
        if(isalpha(c)) {
            letters.insert(c);
        }
    }

    cout << letters.size() << "\n";
    
    return 0;
}