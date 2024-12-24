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
    int n, m, a, b, ans;
    cin >> n >> m >> a >> b;
    if (n % m == 0)
        ans = min((n / m) * b, n * a);
    else
        ans = min(min((n / m) * b + (n % m) * a, n * a), (n / m) * b+b);
    cout << ans << endl;
}

int main()
{
    kachao;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
