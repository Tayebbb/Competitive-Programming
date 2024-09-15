#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int a=s.size();
    int z=a;
    int b=stoi(s);
    int sum=0,sum1=0;
    while(a!=0){
        int c=(b%((int)pow(10,a)));
        int d=(b/pow(10,a));
        sum=sum+c+d;
        a--;
    }
    for(int i=0;i<z;i++){
        sum1=sum1+(b%10);
        b/=10;
    }
    string s1=to_string(sum1+sum);

    cout<<s1<<endl;

    return 0;
}