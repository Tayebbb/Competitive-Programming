#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
#define kachao ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    kachao;

    ll t;
    cin >> t;
    vector<vector<ll>> v(13);
    vector<ll>v1(t),v2(t);

    for (int i=0; i<t; i++)
        cin>>v1[i];
    for (int i=0; i<t; i++)
    {
        cin>>v2[i];
        v[v2[i]].push_back(v1[i]);
    }
    vector<vector<ll>>ps(13);
    for (int i=1; i<=12; i++)
    {
        sort(v[i].begin(),v[i].end(),greater<ll>());
        ps[i].push_back(0);
        for (ll va:v[i])
            ps[i].push_back(ps[i].back()+va);
    }

    ll q;
    cin>>q;
    while(q--)
    {
        ll ty,x,y,sum=0;
        cin >> ty;
        if (ty==1)
        {
            cin>>x;
            for (int i=1; i<=x; i++)
                sum+=ps[i].back();
            cout<<sum<<endl;
        }
        else
        {
            cin>>x>>y;
            for (int i=1; i<=x; i++)
                sum+=ps[i][min(y,(ll)v[i].size())];
            cout<<sum<<endl;
        }
    }
}