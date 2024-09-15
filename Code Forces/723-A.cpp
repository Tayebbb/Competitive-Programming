#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int m = max({a, b, c});
    int mi = min({a, b, c});
    int m2=a+b+c-mi-m;
   
    
        cout << abs(m - m2) + abs(mi - m2) << endl;

}