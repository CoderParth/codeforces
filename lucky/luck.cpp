#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int first_three = 0;
        int second_three = 0;

        for(int i = 0; i < s.size(); ++i) {
            if(i < 3) {
                first_three += s[i] - '0';
            } else {
                second_three += s[i] - '0';
            }
        }

        first_three == second_three ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
    return 0;
}
