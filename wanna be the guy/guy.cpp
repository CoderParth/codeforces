#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> levels(n + 1, 0);

    int p;
    cin >> p;
    for(int i = 0; i < p; ++i) {
        int plevel;
        cin >> plevel;
        levels[plevel]++;
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; ++i) {
        int qlevel;
        cin >> qlevel;
        levels[qlevel]++;
    }

    bool pass = true;
    for(int i = 1; i <= n; ++i) {
        if(levels[i] < 1) {
            pass = false;
            cout << "Oh, my keyboard!" << "\n";
            break;
        }
    }

    if(pass) {
        cout << "I become the guy." << "\n";
    }

    return 0;
    
}