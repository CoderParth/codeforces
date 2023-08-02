#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int rating = 5000;
    while (t--)
    {
        int r;
        cin >> r;

        if (r <= rating && r >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (r >= 1600 && r <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (r >= 1400 && r <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else
        {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}