#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c,d;
        cin>>a>>b>>c>>d;
        if(a+c==b &&b==d || b+d==a&&a==c || a+d==b&&b==c ||b+c==a&&a==d)
            cout<<"YES\n";
        else
            cout<<"NO\n";
}
}
