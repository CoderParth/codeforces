#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> map = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };

    int total = 0;
    while(n--) {
        string s;
        cin >> s;
        total += map[s];
    }

    cout << total << "\n";
    return 0;
}