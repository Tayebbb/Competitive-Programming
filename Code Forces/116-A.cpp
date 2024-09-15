#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,max=0,z=0;
    cin>>n;
    while(n)
    {   int x,y;
        cin>>x>>y;
        z=(z+(y-x));
        if(max<z)
            max=z;
        n--;
    }
cout<<max<<endl;
}