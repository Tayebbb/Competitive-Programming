#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        int mi;
        cin>>a>>b>>c;
        mi=min({a, b, c});
        bool f= true;
        int x=0;
        if(a==b && b==c)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(a%mi!=0 && b%mi!=0 && c%mi!=0)
            f=false;
        while(a!=mi)
        {
            if(x>3 || a%mi!=0)
            {
                f=false;
                break;
            }

                a-=mi;
                x++;

        }
        while(b!=mi)
        {
            if(x>3 || b%mi!=0)
            {
                f=false;
                break;
            }

                b-=mi;
                x++;

        }
        while(c!=mi)
        {
            if(x>3 || c%mi!=0)
            {
                f=false;
                break;
            }


                c-=mi;
                x++;

        }
        if(x<=3 && f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
