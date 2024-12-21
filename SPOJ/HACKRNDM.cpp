#include <bits/stdc++.h>
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve() {  
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll count = 0;

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (ll i = 0; i < n; i++) {
        if (binary_search(v.begin(), v.end(), v[i] + k)) {
            count++;
        }
    }

    cout << count << endl;
}

int main() {
    kachao;
    ll t = 1;
    while (t--) {
        solve();
    }
}
