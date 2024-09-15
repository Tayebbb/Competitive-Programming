#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void code()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll w;
    cin>>w;
    vector<ll> v(w);
    for(auto &u: v)
        cin>>u;
    vector<ll> g(n*m);
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ll res=(min(i,n-k)-max(0ll,i-k+1)+1)*(min(j,m-k)-max(0ll,j-k+1)+1);
            g.push_back(res);

        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    sort(g.begin(),g.end(),greater<ll>());
    ll ans=0;
    for(int i=0; i<w; i++)
    {
        ans+=(v[i]*g[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    kachao
    int t;
    cin >> t;
    while (t--)
    {
        code();
    }
}


