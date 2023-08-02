#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool found = false;
    for(int i = 4; i < n - 1; ++i) {
        for(int j = 4; j < n - 1; ++j) {
            if((i % 2 == 0 || i % 3 == 0) && (j % 2 == 0 || j % 3 == 0)) {
                if(i + j == n) {
                    cout << i << " " << j << "\n";
                    found = true;
                    break;
                }
            }
        }  
        if(found) break;
    }
    return 0;
}