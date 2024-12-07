#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve()
{
   int a,b,c,ans=0;
   cin>>a>>b>>c;
   if(a==1 || b==1)
       ans=b+a;
   else
       ans=b*a;
   if(c==1)
      ans+=c;
   else
      ans*=c;
   cout<<ans<<endl;
}

int main()
{
    kachao;
    ll t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
