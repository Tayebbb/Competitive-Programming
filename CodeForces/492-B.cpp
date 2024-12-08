#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n, l;
    cin >> n >> l;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll maxdiff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxdiff = max(maxdiff, (ll)(v[i + 1] - v[i]));
    }

    if (((maxdiff / 2.0) <= (double)v[0]) && ((double)(l - v[n - 1]) <= v[0]))
        cout << fixed << setprecision(9) << v[0] << endl;
    else if ((maxdiff / 2.0 <= (double)(l - v[n - 1])))
        cout << fixed << setprecision(9) << (double)(l - v[n - 1]) << endl;
    else
        cout << fixed << setprecision(9) << maxdiff / 2.0 << endl;
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
