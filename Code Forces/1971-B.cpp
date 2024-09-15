#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    { string s;
    int c=0, indx=-1, indx2=0;
      cin>>s;
      for(int i=1;i<s.size();i++)
      {
          if(s[0]!=s[i])
            {c++;
            indx=i;}
          else
            indx2=i;

      }
      if(c>0)
      {
          swap(s[indx],s[indx2]);
          yes
          cout<<s<<endl;
      }
      else
        no

    }
}