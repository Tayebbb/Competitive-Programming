#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define pb push_back
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    ll ans = LLONG_MIN;
    for (int i = 0; i < n; ++i) {
        ll here = a[i] + b[i];
        for (int j = 0; j < n; ++j) {
            if (i != j) here += max(a[j], b[j]);
        }
        ans = max(ans, here);
    }
    cout << ans << endl;
}

int main()
{
    kachao;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
