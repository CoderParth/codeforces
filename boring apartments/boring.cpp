#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    unordered_map<int, int> map;

    map[1] = 1;
    map[2] = 3;
    map[3] = 6;
    map[4] = 10;

    while(t--) {
        int x;
        cin >> x;
        
        string xs = to_string(x);
        
        int total = ((x % 10 )- 1) * 10 + map[xs.size()]; 

        cout << total << "\n";
    }

    return 0;
}