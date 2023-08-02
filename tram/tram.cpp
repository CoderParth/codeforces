#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b;
    int min = 0;
    int sum = 0; 

    while(n--) {
        cin >> a >> b;
        sum = sum - a + b;
        if(min < sum) {
            min = sum;
        }
    }

    cout << min << "\n";
    return 0;
}