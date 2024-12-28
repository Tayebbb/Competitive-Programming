#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll a;
    cin >> a;

    ll coins = 1;
    while (a > 3)
    {
        a /= 4;
        coins *= 2;
    }

    cout << coins << endl;
}

int main()
{
    kachao;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
``