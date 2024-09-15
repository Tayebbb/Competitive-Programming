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
    while(t--)
    {
        string s;
        cin>>s;
        bool t1=false, t2=false,d=false;
        short digit=0;
        vector<ll>v;
        string s1;

        ll chari=0;

        for(ll i=1; i<s.size(); i++)
        {
            if(isdigit(s[i]))//ABD815
            {
                s1+=s[i];
                if(d==false)
                    digit++;
                d=true;
            }
            else
            {
                digit=false;
                chari++;
                if (!s1.empty())
                {
                    v.push_back(stoi(s1));
                    s1.clear();
                }
            }

        }
        if(digit==1) t2=true;
        else t1=true;

        v.push_back(stoi(s1));
        vector<int>v1;
        if(t1)
        {
            string result;
            int ans=v[1];

            while (ans > 0)
            {

                char letter = (--ans% 26) + 'A';
                result = letter + result;
                ans /= 26;
            }

            cout<<result<<v[0]<<endl;
        }

        else
        {
            string c="R";
            c+=to_string(v[0]);
            c+="C";
            int ans=s[0]-'A'+1;
            if(chari==0);

            else
                for(int i=1; i<=chari; i++)
                {
                    int x1=s[i]-'A'+1;
                    ans=(ans*26)+x1;
                }
            c+=to_string(ans);
            cout<<c<<endl;
        }
    }
}


