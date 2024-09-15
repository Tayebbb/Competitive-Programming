#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

int main() {
    short t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='G')
                s1[i]='B';
            if(s2[i]=='G')
                s2[i]='B';
        }
        if(s1==s2)
            yes
        else
            no

}
}

