#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    kachao
    int a,b;
    cin>>a>>b;
    if(a+b!=1)
    {cout<<"Invalid"<<endl;
    return 0;}

    if(a+b==1 && a==1){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;


}

