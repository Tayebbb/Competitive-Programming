#include <bits/stdc++.h>
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n == 2)
    {
        cout << 1 << endl;
        return;
    }

    ll sum = (n * (2 * k + (n - 1))) / 2;
    ll mini = LONG_LONG_MAX;
    ll result;
   for (ll i = (n+2-1)/2; i < n-(n/3); ++i)
    {
        
        ll h1 = (i * (2 * k + (i - 1))) / 2;
        ll h2 = sum - h1;
        result = abs(h1 - h2);   
        mini = min(result, mini);
    }
    cout << mini << endl;
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
