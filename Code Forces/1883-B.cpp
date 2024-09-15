#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,oc=0;
        cin>>n>>k;
        ll a[26]= {0};
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            char c=s[i];
            a[(int)c-97]++;
        }
        for(int i=0; i<26; i++)
        {
            if(a[i]%2!=0)
                oc++;
        }
        oc-=k;
        if(oc>1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;}
    }

