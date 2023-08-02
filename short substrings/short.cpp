#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string a, b;
        cin >> b;

        for(int i = 0; i < b.size(); ++i) {
            if(i % 2 == 0 || i == b.size() - 1) {
                a.push_back(b[i]);
            }
        }

        cout << a << "\n";
    }
    return 0; 
}