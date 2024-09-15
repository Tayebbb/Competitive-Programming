#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    short t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            int f,j;

            if ((s[i]=='b' ||s[i]=='c' || s[i]=='d') && (s[i+1]=='a' ||s[i+1]=='e') && (s[i+2]=='b'
                    ||s[i+2]=='c' || s[i+2]=='d' )&& (s[i+3]!='a' && s[i+3]!='e') )
            {
                for(j=i; j<i+3; j++)
                    cout<<s[j];
                if(j!=n)
                    cout<<".";
                i+=2;
            }
            else
            {
                for(j=i; j<i+2; j++)
                    cout<<s[j];
                if(j!=n)
                    cout<<".";
                i++;
            }
        }
        cout<<endl;
    }
}
