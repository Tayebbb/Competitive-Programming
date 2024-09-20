#include <bits/stdc++.h>
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll mi=min(x,y);
    ll ans=(n+mi-1)/mi;
    cout<<ans<<endl;
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
