#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int i = 1;
    while((k * i) % 10 != 0 && ((k * i) - r) % 10 != 0) {
        i++;
    }

    cout << i << "\n";
    return 0;
}