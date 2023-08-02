#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;

    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;

    for(char c : s1) {
        map1[c]++;
    }

    for(char c : s2) {
        map1[c]++;
    }

    for(char c : s3) {
       map2[c]++;
    }

    if(map1 == map2) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}