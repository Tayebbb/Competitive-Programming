#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int n=(a+b+c);
        if(n%2!=0)
            cout<<-1<<endl;
        else if(a==0)
            cout<<min(b,c)<<endl;
        else if(c>(a+b))
            cout<<a+b<<endl;
        else
            cout<<n/2<<endl;
    }
}
