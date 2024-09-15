#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {

    string t;
    cin >> t;
    ll n = t.size();
    ll h=((n+2-1)/2);
    ll i=(n%2==0)?h+1:h,j=h-1;
    for (; i <n; i++,j--) {

        if (t.substr(0, i) == t.substr(j, i)){
            yes
            cout << t.substr(0,i) << endl;
           return 0;
        }
    }
    no
}

