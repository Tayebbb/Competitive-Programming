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
    cin >> t;
    while (t--)
    {
       ll l,r,L,R;
       cin>>l>>r>>L>>R;
       ll l1=max(l,L);
       ll r1=min(r,R);
       if(r1<l1)
        {cout<<1<<endl;
        continue;}
       ll ans=r1-l1;
       if(min(l,L)<l1)
        ans++;
       if(max(r,R)>r1)
        ans++;
       cout<<ans<<endl;


        }

       }

