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
    for (int i = 1; i <=t; i++)
    {
        ll t, p, r;
        cin >> t >> p >> r;

        if (t == p && r != 1)
        {
            cout << "Case " << i << ": No" << endl;
        }
        else
            cout << "Case " << i << ": Yes" << endl;
    }
}
int main()
{
    kachao
    solve();
}
