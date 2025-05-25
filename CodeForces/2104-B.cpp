#include <bits/stdc++.h>
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1), prefix_max(n + 1);
    prefix_max[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        prefix_max[i] = max(v[i], prefix_max[i - 1]);
    }

    ll suffix_sum = 0;

    for (int i = n; i >= 1; i--)
    {
        cout << prefix_max[i] + suffix_sum << " ";
        suffix_sum += v[i];
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
        cout << "\n";
    }
}
