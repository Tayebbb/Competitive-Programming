#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int num = s[i] - '0';
        if (num >= 5)
        {
            num = 9-num;
            s[i] = num + '0';
        }
    }
    if (s[0] == '0')
        s[0] = '9';
        cout<<s<<endl;
}

int main()
{
    kachao;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
