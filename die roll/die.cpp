#include <bits/stdc++.h>
using namespace std;

// Function to calculate gcd using Euclid's algorithm
int gcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

int main() {
    int y, w;
    cin >> y >> w;

    int max_num = max(y,w);
    int numerator = 7 - max_num;   // Numerator of the fraction
    int denominator = 6;           // Denominator of the fraction

    int gcd_num = gcd(numerator, denominator); // Calculate gcd of numerator and denominator

    // Print irreducible form of the fraction
    cout << numerator/gcd_num << "/" << denominator/gcd_num << "\n";

    return 0;
}
