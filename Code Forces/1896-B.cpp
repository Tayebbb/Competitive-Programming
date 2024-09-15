#include <bits/stdc++.h>
using namespace std;
int main() {
    short t;
    cin >> t;
    while(t--) {
        int n, c = 0;
        string s;
        cin >> n >> s;
        vector<bool> v(n, false);
        for(int i = 0; i < n - 1;) {
            if(s[i] == 'A' && s[i + 1] == 'B' && !v[i]) {
                swap(s[i], s[i + 1]);
                i--;
                c++;
                v[i + 1] = true;
            } else
                i++;
        }
        cout <<c<< endl;}
}