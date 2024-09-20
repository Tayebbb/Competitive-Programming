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
    map<int, int> m;
    vector<int> v;
    int x;

    while (n--)
    {
        cin >> x;
        m[x]++;
    }

    for (auto [key, freq] : m)
        v.push_back(freq);

    sort(v.begin(), v.end(), greater<ll>());
    
    ll lastelement = v[0];
    ll r = lastelement;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < lastelement)
        {
            lastelement = v[i];
        }
        else
        {
            lastelement = max(0LL, lastelement - 1);
        }
        
        r += lastelement;
        
        if (lastelement == 0) {
            break;
        }
    }

    cout << r << '\n';
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
