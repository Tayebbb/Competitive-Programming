#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,n,m,l,r,cnt=0,ans=0;
    cin>>n>>m>>l>>r;

    vector<ll>a(n),b(m);

    //ll a[n],b[m],z[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());

    for(i=0;i<m;i++)
        cin>>b[i];
 sort(b.begin(),b.end());

    for(i=0;i<n;i++)
    {
        ll x = l-a[i];
        ll y = r - a[i];

        //cout<<x<<" "<<y<<endl;


//        cout<<upper_bound(b.begin(),b.end(),x-1)-b.begin()<<endl;
//         cout<<upper_bound(b.begin(),b.end(),y)-b.begin()<<endl;
ll p = upper_bound(b.begin(),b.end(),y)-upper_bound(b.begin(),b.end(),x-1);

//cout<<p<<endl;
        ans+=p;
    }

    cout<<ans<<endl;
}
