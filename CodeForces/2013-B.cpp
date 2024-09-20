
#include <bits/stdc++.h>
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    ll n, sum = 0;
    cin >> n;
    vector<ll> v(n), pre;
    vector<bool> ele(n,true);

    for(int i=0;i<n;i++){
         cin>>v[i];
         if(i<n-2){
            sum+=v[i];
         }}
         cout<<v[n-1]-v[n-2]-sum<<endl;
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
