#include <bits/stdc++.h>
using namespace std;

bool watermelon(int n) {
    return n != 2 && n % 2 == 0;  
}

int main() {
    int w;
    scanf("%d", &w);
    bool isDivisible = watermelon(w);    
    (isDivisible == true)  ? printf("YES") : printf("NO");
    return 0;
}
