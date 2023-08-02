#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0;
    int n;
    cin >> n;

    string stmnt;

    while(n--) {
        cin >> stmnt;
        if(stmnt == "--X" || stmnt == "X--") {
            x--;
        } else {
            x++;
        }
    }

    cout << x << "\n";
    return 0;
}