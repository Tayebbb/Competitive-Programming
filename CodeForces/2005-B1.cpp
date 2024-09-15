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
    ll n, m, q;
    cin >> n >> m >> q;
    ll m1, m2;
    cin >> m1>> m2;
    ll q1;
    cin >> q1;

    ll c = 0;
    ll d1, d2;
    if (m1 < q1 && m2 < q1)
    {
        cout << n - max(m1, m2) << endl;
    }
    else if (m1 > q1 && m2 > q1)
    {
        cout << min(m1, m2) - 1 << endl;
    }
    else
        cout << abs(m1 - m2)/2 << endl;

}

int main()
{
    kachao
        ll t;
    cin >> t;
    while (t--)
        solve();
}
