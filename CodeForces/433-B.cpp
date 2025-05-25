#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n), presum(n);

    cin >> v[0];
    presum[0] = v[0];

    for (ll i = 1; i < n; i++)
    {
        cin >> v[i];
        presum[i] = presum[i - 1] + v[i];
    }

    vector<ll> v2 = v;
    sort(v2.begin(), v2.end());

    vector<ll> presum_sorted(n);
    presum_sorted[0] = v2[0];

    for (ll i = 1; i < n; i++)
    {
        presum_sorted[i] = presum_sorted[i - 1] + v2[i];
    }

    ll q, x, l, r;
    cin >> q;
    while (q--)
    {
        cin >> x >> l >> r;
        l--;
        r--;

        if (x == 1)
            cout << presum[r] - (l > 0 ? presum[l - 1] : 0) << "\n";
        else
            cout << presum_sorted[r] - (l > 0 ? presum_sorted[l - 1] : 0) << "\n";
    }
}

int main()
{
    kachao;
    ll t = 1;
    while (t--)
    {
        solve();
    }
}
