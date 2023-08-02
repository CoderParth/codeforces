#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m_count = 0, c_count = 0;
    while(n--) {
        int m, c;
        cin >> m >> c;

        if(m > c) {
            m_count++;
        } else if(c > m) {
            c_count++;
        }
    }

    if(m_count > c_count) {
        cout << "Mishka" <<"\n";
    } else if(m_count < c_count) {
        cout << "Chris" << "\n";
    } else {
        cout << "Friendship is magic!^^" << "\n";
    }

    return 0;
}