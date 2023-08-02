#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    string snake[n][m];

    bool atEnd = true;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(i % 2 == 0) {
                snake[i][j] = '#';
            } else {
                snake[i][j] = '.';
                if(atEnd && j == m - 1) {
                    snake[i][m - 1] = '#';
                } else if(!atEnd && j == 0) {
                    snake[i][0] = '#';
                } 
            }
        }
        if(i % 2 != 0) atEnd = !atEnd;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << snake[i][j];
        }
        cout << "\n";
    }
    return 0;
}