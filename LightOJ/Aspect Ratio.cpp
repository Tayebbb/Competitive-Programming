#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double k;
        cin >> k;
        double r = sqrt((k * k - 1.0) / (4.0 - k * k));
        cout << "Case " << i << ": " << fixed << setprecision(4) << r << endl;
    }
}
int main()
{
    kachao
    solve();
}
