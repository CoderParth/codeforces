#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int totalPercentage = 0;
    int noOfDrinks = n;

    while(n--) {
        int p;
        cin >> p;
        totalPercentage += p;
    }

    double volume = (double) totalPercentage / noOfDrinks;
    cout << fixed << setprecision(12) << volume << "\n";
    return 0;
}