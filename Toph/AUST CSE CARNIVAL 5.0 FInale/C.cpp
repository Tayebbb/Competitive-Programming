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
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> cats, mice;

        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'C')
                cats.push_back(i);
            else if (ch == 'M')
                mice.push_back(i);
        }

        int caught = 0, i = 0, j = 0;

        while (i < cats.size() && j < mice.size())
        {
            if (abs(cats[i] - mice[j]) <= k)
            {
                caught++;
                i++;
                j++;
            }
            else if (cats[i] < mice[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        cout << caught << endl;
    }
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
