#include<iostream>
using namespace std;
int main()
{
    int n,t,x;
    cin>>t;
    for(int i=0; i<t; i++)
    {int maxdiff=0;
        cin>>n>>x;
        int a[n+1];
        for(int j=1; j<=n; j++)
            cin>>a[j];
        a[0]=0;
        for(int j=0; j<n; j++)
        {
            if((a[j+1]-a[j])>maxdiff)
                maxdiff=(a[j+1]-a[j]);
        }
        if(((x-a[n])*2)>maxdiff)
            maxdiff=(x-a[n])*2;
        cout<<maxdiff<<endl;
    }

}
