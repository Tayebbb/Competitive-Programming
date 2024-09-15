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
        ll n,k,x;
        cin>>n>>k>>x;

        ll low=(k*(k+1))/2;
        ll high=(n*(n+1)/2)-((n-k)*(n-k+1))/2;
        if(x>=low && x<=high)
            yes
        else
            no

    }
}
