#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> map;
    int i = 1;
    while(n--) {
        int p;
        cin >> p;
        map[p] = (i);
        i++;
    }

    for(int j = 1; j <= map.size(); j++) {
        cout << map[j] << " ";
    }

    return 0;
}