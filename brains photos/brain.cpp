#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int s = n * m;
    bool color = false;

    for(int i = 0; i < s; ++i) {
        char a;
        cin >> a;
        if(a == 'C' || a == 'M' || a == 'Y') {
            color = true;
        }
    }

    if(color) {
         cout << "#Color" << "\n";
    } else {
        cout << "#Black&White" << "\n";
    }
    
    return 0;
}