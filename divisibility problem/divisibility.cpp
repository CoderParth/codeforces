#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> noOfMoves(t, 0);

    int i = 0;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int moves = (b - a % b) % b;
        noOfMoves[i] = moves;
        i++;
    }

    for(int j = 0; j < noOfMoves.size(); ++j) {
        cout << noOfMoves[j] << "\n";
    }
    return 0;
}