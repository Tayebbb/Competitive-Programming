#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    kachao
        ll x,
        p, c;
    cin >> x >> p >> c;
    ll ans = x - p;
    cout << ans % c << endl;
}
