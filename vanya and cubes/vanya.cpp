#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h = 0;
    int cnt = 0;

    while (true)
    {
        h++;
        cnt += (h*(h+1))/2;
        
        if(cnt > n)
        {
            h--;
            break;
        }
    }
    
    cout << h << "\n";
    return 0;
}
