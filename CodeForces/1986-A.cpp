#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    kachao
    ll t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int max_val = max({a, b, c});
        int min_val = min({a, b, c});
        cout << max_val - min_val << endl;
    }
    return 0;
}
