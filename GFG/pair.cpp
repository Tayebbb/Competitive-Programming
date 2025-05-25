#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solve()
{
    ll q;
    cin >> q;
    vector<pair<string, pair<int, int>>> v;
    while (q--)
    {
        char cmd;
        cin >> cmd;
        if (cmd == 'a')
        {
            string a;
            int b, c;
            cin >> a >> b >> c;
            v.push_back({a, {b, c}});
        }
        else if (cmd == 'b')
        {
            cout << v.size() << endl;
            continue;
        }
        else if (cmd == 'c')
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << " ";
            }
        }
        else
        {
            sort(v.begin(), v.end(), [](auto &a, auto &b)
                 {
    if (a.second.first == b.second.first)
        return a.second.second < b.second.second;
    return a.second.first < b.second.first; });
    
        }
    }
    cout<<endl;
}

int main()
{
    kachao;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
