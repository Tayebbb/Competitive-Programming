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
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n>>s;

        ll one=count(s.begin(), s.end(), '1');
        ll zero=count(s.begin(), s.end(), '0');
        if(one%4==0)
        {
            ll v=one/4;
            v++;
            if((v*v-one)==zero)
                yes
                else
                    no
                }
        else
            no

        }

}

