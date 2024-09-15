#include <bits/stdc++.h>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    kachao
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,co;
        cin>>a>>b>>c;
        ll ca = (a + c - 1) / c;
        ll cb = (b + c - 1) / c;
       ll ans= max(ca,cb)*2;
       if(ca>cb){
        ans--;
       }
       cout<<ans<<endl;
    }
}
