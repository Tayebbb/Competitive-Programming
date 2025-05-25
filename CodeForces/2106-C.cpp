#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);

    for (ll &x : a)
        cin >> x;
    for (ll &x : b)
        cin >> x;

    set<ll> x_values;
    bool all_missing = true;

    for (int i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            x_values.insert(a[i] + b[i]);
            all_missing = false;
        }
    }

    if (x_values.size() > 1)
    {
        cout << 0 << "\n";
        return;
    }

    if (!all_missing)
    {
        ll x = *x_values.begin();
        for (int i = 0; i < n; i++)
        {
            if (b[i] == -1)
            {
                ll bi = x - a[i];
                if (bi < 0 || bi > k)
                {
                    cout << 0 << "\n";
                    return;
                }
            }
        }
        cout << 1 << "\n";
    }
    else
    {
        ll low = *max_element(a.begin(), a.end());
        ll high = a[0] + k;
        for (int i = 0; i < n; i++)
        {
            high = min(high, a[i] + k);
        }
        if (low > high)
            cout << 0 << "\n";
        else
            cout << (high - low + 1) << "\n";
    }
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
    return 0;
}
