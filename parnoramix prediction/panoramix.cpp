#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if(num == 2) {
        return true;
    }
    if(num % 2 == 0) {
        return false;
    }

    for(int i = 3; i * i <= num; i+=2) {
        if(num % i ==  0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
 
    if(!(isPrime(m))) {
        cout << "NO" << "\n";
        return 0;
    }

    for(int i = n + 1; i < m; ++i) {
        if(isPrime(i)) {
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << "YES" << "\n";

    return 0;
}