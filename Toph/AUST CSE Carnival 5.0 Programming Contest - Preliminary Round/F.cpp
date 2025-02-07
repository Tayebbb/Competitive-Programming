#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll x, n, ans = 0, previndx = -1, lastindx = -1;
    string s;
    cin >> x >> n;
    vector<int> v(n);
    vector<string> s1;
    string week[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    for (int i = 0; i < n; i++)
    {
        cin >> s >> v[i];
        s1.push_back(s);
    }

    for (int i = 0; i < 5; i++)
    {
        vector<int> v1(n);
        for (int &x : v1)
            cin >> x;

        for (int j = 0; j < n; j++)
        {
            if (v1[j])
            {
                ans += v[j] * v1[j];
                if (ans >= x)
                {
                    previndx = j;
                    lastindx = i;
                    break;
                }
            }
        }
        if (ans >= x) break;
    }

    if (ans < x)
    {
        cout << "Diet control na korleo cholbe." << endl
             << ans << endl;
    }
    else
    {
        cout << week[lastindx] << endl
             << ans << endl
             << "Ar khabo na " << s1[previndx] << endl;
    }
}

int main()
{
    kachao;
    solve();
}
