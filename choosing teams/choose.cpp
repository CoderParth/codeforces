#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int limit = 5;
    int count = 0;
    while(n--) {
        int a;
        cin >> a;
        if(limit - a >= k) {
            count++;
        } 
    }

    cout << count / 3 << "\n";
    return 0;
}