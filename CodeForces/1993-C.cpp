#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

void code()
{   
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for (int i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(),v.end());
    ll l=v[n-1],r=v[n-1]+k-1;
    ll ans=l;
    for (int i=0;i<n-1;i++)
    {
        ll diff=l-v[i];
        ll x=(diff/(k*2));
        ll low=v[i]+(k*2*x);
        if (diff%(k*2)>=k)
            low+=k*2;
        ll high=low+k-1;
        l = max(low,l);
        r = min(r,high);
        if(l>r)
        {
            cout <<"-1\n";
            return;
        }
        ans=l;
    }
    cout<<ans<<endl;
}

int main()
{
    //kachao
    int t;
    cin>>t;
    while(t--)
    {
        code();
    }
}
