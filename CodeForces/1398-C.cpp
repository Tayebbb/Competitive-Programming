#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    kachao
    short t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<int,ll>v;
        v[0]=1;
        string s;
        cin>>s;
        ll sum=0,ans=0;
        for(ll i=0;i<n;i++)
        {
            sum+=(s[i]-'0'-1);
            ans+=v[sum];
            v[sum]++;
        }
        cout<<ans<<endl;
    }
}


