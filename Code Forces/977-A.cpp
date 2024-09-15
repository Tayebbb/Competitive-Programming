#include <iostream>
using namespace std;

int main()
{
    long long n;
    int k;
    cin>>n>>k;
    while(k>0)
    {
        if(n%10!=0)
            n--;
        else
            n/=10;
        k--;
    }
    cout<<n<<endl;
}
