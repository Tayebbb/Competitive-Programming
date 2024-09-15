#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll t;
    cin >> t;
    vector<string> v, v2;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        v2.push_back(v[i].substr(1));
    }

    ll failedPairs = 0;

    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (v2[i] != v2[j])
            {
                failedPairs++;
            }
        }
    }

    cout << failedPairs << endl;
}

int main()
{
    kachao
    solve();
}
