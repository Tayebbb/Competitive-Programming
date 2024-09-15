#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl;
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(n-((n/m)+(n%m!=0))<=k)
            cout<<"NO"<<endl;
        else
            yes
        }
}
