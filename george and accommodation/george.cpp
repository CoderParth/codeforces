#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numberOfRooms = 0;

    while(n--) {
        int p, q;
        cin >> p >> q;
        if((p + 2) <= q) numberOfRooms++;
    }

    cout << numberOfRooms << "\n";
    return 0;
}