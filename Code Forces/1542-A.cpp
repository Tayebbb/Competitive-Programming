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
        short n,e=0,c=0;
        cin>>n;
        n*=2;
        while(n--)
        {
            int x;
            cin>>x;
            if(x%2==0)
                e++;
            else
                c++;
        }
        if(e==c)
            yes
        else
            no
    }
}