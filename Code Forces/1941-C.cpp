#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<string>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n-2;i++)
        {
            if(s[i]=='m' && s[i+1]=='a' &&s[i+2]=='p' || s[i]=='p' && s[i+1]=='i' &&s[i+2]=='e')
            {
                c++;
                i+=2;
            }
            }
            cout<<c<<endl;

    }
}