#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int domino = 2;
    int rectArea = m * n;

    cout << rectArea / domino << endl;
   
    return 0;
}