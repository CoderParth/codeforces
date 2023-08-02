#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[5][5];
    int numberOfMoves;

    int posrow, poscol;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            cin >> mat[i][j] ;
            if(mat[i][j] == 1) {
                posrow = i;
                poscol = j;
            } 
        }
    }

    numberOfMoves = abs(posrow - 2) + abs(poscol - 2);
    cout << numberOfMoves << "\n";

    return 0;
}
