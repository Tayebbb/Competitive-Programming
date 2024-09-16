#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<int> v;
    ll presum = 0;
    while (a--)
    {
        ll x;
        cin >> x;
        presum += x;
        v.push_back(presum);
    }
    while (b--){
        ll l,r;
        cin>>l>>r;
        ll c;
        if(l!=1)
        c=(v[r-1]-v[l-2]);
        else
        c=v[r-1];
        cout<<c<<endl;
    }
}

int main()
{
    kachao
    solve();
}
