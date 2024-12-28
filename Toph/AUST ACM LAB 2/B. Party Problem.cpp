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

    unordered_map<string, ll> substringCount;
    vector<string> names(t);

    for (int i = 0; i < t; i++)
    {
        cin >> names[i];
        string substr = names[i].substr(1);
        substringCount[substr]++;
    }

    ll totalPairs = (t * (t - 1)) / 2;
    ll validPairs = 0;

    for (const auto &name : names)
    {
        string substr = name.substr(1);
        ll count = substringCount[substr];
        validPairs += (count - 1);
    }

    validPairs /= 2;
    ll failedPairs = totalPairs - validPairs;

    cout << failedPairs << endl;
}

int main()
{
    kachao
    solve();
}
