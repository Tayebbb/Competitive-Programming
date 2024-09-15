#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

int main() {
    short t;
    cin >> t;
    while (t--) {
        long long int n,c=0, adj=0;
        cin >> n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                c++;
            if(s[i]=='1'&& s[i+1]=='1')
                {adj++;
                c++;
                i++;}
        }
        if(c%2!=0)
            no
       else if(c==2 && adj==1)
            no
        else
           yes
}
}