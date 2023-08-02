#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    
    int width = 0;
    while(n--) {
        int a;
        cin >> a;
        if(a <= h) {
            width++;
        } else {
            width += 2;
        }
    }

    cout << width << "\n";
    return 0;
}