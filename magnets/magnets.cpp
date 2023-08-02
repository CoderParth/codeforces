#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string current;
    int count = 0;
    while(n--) {
        string magnets;
        cin >> magnets;

        if(current != magnets) {
            current = magnets;
            count++;
        };
    }

    cout << count << "\n";
    return 0;
}