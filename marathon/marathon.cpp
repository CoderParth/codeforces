#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int in_front = 0;
        if(b > a) in_front++;
        if(c > a) in_front++;
        if(d > a) in_front++;   

        cout << in_front << "\n";
    }
    return 0;
}