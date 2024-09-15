#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    int k,c=0;
    cin>>k;
    while(k)
    {
        int x,y;
        cin>>x>>y;
        if((y-x)>=2)
            c++;
            k--;
    }
    cout<<c<<endl;
}