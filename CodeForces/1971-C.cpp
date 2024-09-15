#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a>b)
            swap(a,b);

        if((a<c && c<b) && (a<d && d<b))
           no
        else if(((a<c && c<b) || (a<d && d<b)))
            yes
        else
           no
    }
}