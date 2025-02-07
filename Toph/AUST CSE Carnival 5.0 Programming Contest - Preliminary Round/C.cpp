#include <bits/stdc++.h>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n * m);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    ll ans = v[0] + v[(n * m) - 1];
    for (int i = 0, j = v.size() - 1; i < j; i++, j--)
    {
        if (v[i] + v[j] != ans)
        {
            no return;
        }
    }
    yes
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