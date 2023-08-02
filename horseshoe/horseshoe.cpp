#include <bits/stdc++.h>
using namespace std;

int main() {
    int s = 4;
    set<int> shoes;

    while(s--) {
        int a; 
        cin >> a;
        shoes.insert(a);
    }

    cout << 4 - shoes.size() << "\n";
    return 0;
}