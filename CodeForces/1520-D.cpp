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
    int n;
    cin >> n;
    vector<ll> freq(2 * n, 0);
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ll idx = x - i + n;
        ans += freq[idx];
        freq[idx]++;
    }

    cout << ans << endl;
}

int main()
{
    kachao;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
