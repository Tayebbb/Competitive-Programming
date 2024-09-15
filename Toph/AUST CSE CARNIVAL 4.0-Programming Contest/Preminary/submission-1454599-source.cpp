#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    kachao
    ll t;
    cin>>t;
    while(t--){
    ll u,t,d,s;
    cin>>u>>t>>d>>s;
    ll ans=s/d;
    ans*=t;
    ans-=t;
    ans+=s/u;

    cout<<ans<<endl;
}}
