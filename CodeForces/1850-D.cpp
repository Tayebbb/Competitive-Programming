#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        int n,k,c1=1,c2=1;
        cin>>n>>k;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int y;
            cin>>y;
            v.push_back(y);
        }
        int maxc=1,maxc2=1;
        sort(v.begin(),v.end());
        for(int i=1; i<n; i++)
        {
            if((v[i]-v[i-1]<=k))
                c1++;
            if(c1>maxc)
                maxc=c1;
            if((v[i]-v[i-1]>k))
            {
                c1=1;
            }

        }
        maxc=c1;
        for(int j=n-1; j>0; j--)
        {
            if((v[j]-v[j-1]<=k))
                c2++;
            if(c2>maxc2)
                maxc2=c2;
            if((v[j]-v[j-1]>k))
            {
                c2=1;
            }
        }

        cout<<n-max(maxc,maxc2)<<endl;
    }
}
