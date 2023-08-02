#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int mid = (x + y + z) / 3;

    int total;
    if(x > y && x < z || x > z && x < y) {
        total = abs(y - mid) + abs(z - mid);
    } else if (y < x && y > z || y > x && y < z) {
        total = abs(x - mid) + abs(z - mid);
    } else {
        total = abs(x - mid) + abs(y - mid);
    }
   

    cout << total << "\n";
    return 0;
}