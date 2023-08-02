#include <bits/stdc++.h>
using namespace std;

int main() {
    string first;
    string second;

    cin >> first;
    cin >> second;

    for(int i = 0; i < first.size(); ++i) {
        first[i] = tolower(first[i]);
        second[i] = tolower(second[i]);
    }

    if(first > second) {
        cout << 1;
    } else if ( first < second) {
        cout << -1;
    } else {
        cout << 0;
    }
    
    return 0;
}