#include <bits/stdc++.h>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;

        string s(4+y*2,'*');
        string s2(y,'*');
        string line1 = s+'\n';
        string line2 = s2+"AUST"+s2 +'\n';

        for (int j = 0; j < y; ++j)
            cout << line1;
        for (int j = 0; j < x; ++j)
            cout << line2;
        for (int j = 0; j < y; ++j)
            cout << line1;
    }

    return 0;
}
