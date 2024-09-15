#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

int main()
{
    int y;
    int c1=0,c2=0,c3=0;
    cin>>y;
    for(int i=0;i<y;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        c1++;
        else if(x==2)
        c2++;
        else
        c3++;
    }
    cout<<y-max({c1,c2,c3})<<endl;
}

