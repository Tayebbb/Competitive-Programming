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
    int n, sum = 0;
    cin >> n;
    vector<int> v(n), v2;
    for (int &x : v)
    {
        cin >> x;
        sum += x;
        v2.push_back(sum);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, ans = 1;
        cin >> x;
        ans = lower_bound(v2.begin(), v2.end(), x) - v2.begin() + 1;
        cout << ans << endl;
    }
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
