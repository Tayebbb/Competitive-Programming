#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
using namespace std;
int main()
{
    string s,s2="hello";
    cin>>s;
    int c[26]={0};
    for(int i=0,j=0;s[i]!='\0';i++)
    {
        if(s[i]==s2[j])
            j++;
        if(j==5)
        {yes
        return 0;}
    }
    no

}
