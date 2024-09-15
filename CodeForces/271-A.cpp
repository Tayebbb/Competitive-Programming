#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cin>>n;
    while(1)
    {   n++;
        int x=n;
        v.clear();
        while(x>0)
        {
            int a=x%10;
            x/=10;
            v.push_back(a);
        }
        if(v[0]==v[1] || v[0]==v[2] || v[0]==v[3] || v[1]==v[2] || v[1]==v[3] || v[2]==v[3] )
         continue;
        else
            break;
    }
    cout<<n<<endl;
}
