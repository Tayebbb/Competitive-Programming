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
        ll n;
        cin >> n;
        vector<int> v;

        for(ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for(int j = 0; j < s.length(); j++)
            {
                if(s[j] == '#')
                {
                    v.push_back(j);
                    break;
                }
            }
        }
        for(int i=v.size()-1; i>= 0;i--)
        {
            cout<<v[i]+1<<" ";
        }
        cout << endl;
    }

}
