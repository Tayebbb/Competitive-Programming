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
    for (int i = 1; i <=t; i++)
    {
        ll a,b, res=0;
        cin>>a>>b;
        while(a--){
            ll x,y;
            cin>>x>>y;
            res=b/x;
        }
        cout<<"Case "<<i<<": "<<res<<endl;
}}
int main()
{
    kachao
    solve();
}
