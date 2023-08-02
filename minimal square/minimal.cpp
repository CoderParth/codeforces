#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int max_side = max(max(a, b), 2 * min(a, b));

        cout << max_side * max_side << "\n";
    }
    return 0;
}