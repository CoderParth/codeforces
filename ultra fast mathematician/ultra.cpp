#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    string s = "";
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            s.push_back('1');
        } else {
            s.push_back('0');
        }
    }

    for(char c : s) {
        cout << c ;
    }

    return 0;
}