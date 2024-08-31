#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,f=0,c=0;
        cin>>n;
        char a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {
            if (a[i]=='.' && a[i+1]=='.'&& a[i+2]=='.')
            {
                cout<<"2"<<endl;
                c=1;
                break;
            }
            if (a[i]=='.')
                f++;
        }
        if(c==0)
            cout<<f<<endl;

        t--;
    }
}
