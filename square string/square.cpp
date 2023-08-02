#include <bits/stdc++.h>
using namespace std;

void isSquare(string s) {
    if(s.size() % 2 != 0) {
        cout << "NO" << "\n"; 
    } else {
        vector<char> A;
        vector<char> B;
        int half = s.size() / 2;
        for(int i = 0; i < half; ++i) {
            A.push_back(s[i]);
        }

        for(int i = half; i < s.size(); ++i) {
            B.push_back(s[i]);
        }

        if(A == B) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        isSquare(s);
    }
    return 0;
}