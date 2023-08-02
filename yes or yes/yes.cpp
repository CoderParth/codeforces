#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        bool correct = true;
        for(int i = 0; i < s.size(); ++i) {
            char lowered = tolower(s[i]);
            if((i == 0 && lowered != 'y') || (i == 1 && lowered != 'e') || (i == 2 && lowered != 's')) {
                correct = false;
                break;
            }
        }

        if(correct) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}