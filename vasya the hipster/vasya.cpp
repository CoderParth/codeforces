#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int different = 0, same;
    while(a > 0 && b > 0) {
        a--;
        b--;
        different++;
    }

    (a > 0) ? same = a / 2 : same = b / 2;

    cout << different << " " << same << "\n";
    return 0;
}