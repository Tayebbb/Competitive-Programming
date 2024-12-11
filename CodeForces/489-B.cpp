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
    vector<int> v1, v2;
    int n;
    cin >> n;

   
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v1.pb(x);
    }

  
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v2.pb(x);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int i = 0, j = 0, ans = 0;

  
    while (i < v1.size() && j < v2.size())
    {
        if (abs(v1[i] - v2[j])<= 1 )
        {
            ans++;
            ++i;
            ++j;
        }
        else if (v1[i]<v2[j])
            ++i;
        
        else
            ++j;
        
    }
    cout << ans << endl;
}

int main()
{
    kachao;
    ll t=1;
   // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
