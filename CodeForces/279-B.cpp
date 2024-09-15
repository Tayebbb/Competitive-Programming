#include <bits/stdc++.h>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l=0,r=0,s=0,m=0;
    while(r<n)
    {
        s+=a[r];
        if(s>t)
        {
            s-=a[l];
            l++;
        }
        m=max(m,r-l+1);
        r++;
    }
    cout<<m<<endl;
}

