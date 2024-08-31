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
    { ll n,m;
     cin>>n>>m;
     string s1,s2;
     cin>>s1;
     vector<ll>v;
     for(int i=0;i<m;i++)
     {
         ll x;
         cin>>x;
         v.push_back(x);
     }
     sort(v.begin(), v.end());
     cin>>s2;
     sort(s2.begin(), s2.end());

    ll prev=-1;
     for (int i=0,j=0; i<m;i++) {
            if(v[i]!=prev)
            {s1[v[i]-1]=s2[j];
            j++;}
            prev=v[i];}
     cout<<s1<<endl;
     v.clear();
    }

}
