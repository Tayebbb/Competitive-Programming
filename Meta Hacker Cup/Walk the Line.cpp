#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    kachao
        ll t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll res = 0;
        if (n > 2)
            res = v[0] * (2 * (n - 1));
        else
            res = v[0];
            
        if (res <= k)
            cout << "Case " << "#" <<j+1<<":"<< " YES" << endl;
        else
            cout << "Case " << "#" <<j+1<<":"<< " NO" << endl;
    }
}
