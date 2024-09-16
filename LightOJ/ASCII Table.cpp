#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        cout << "Case " << x << ":\n";
        char c, c1;
        cin >> c >> c1;
        int diff = abs(c1 - c);
        for (int i = 1; i * 2 <= diff; i++)
        {
            if (diff % i == 0)
            {
                cout << i << " " << (94 + i - 1) / i << endl;
            }
        }
        cout << diff << " " << (94 + diff - 1) / diff << endl
             << endl;
    }
}
int main()
{
    kachao

    solve();
}
