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
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    ll t;
    cin >> t;
    sort(v.begin(), v.end());
    while (t--)
    {
        ll q;
        cin >> q;
        auto it = upper_bound(v.begin(),v.end(),q);
        cout<<(it-v.begin())<<endl; 
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
