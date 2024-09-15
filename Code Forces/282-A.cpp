#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    while(n)
    {   string str;
        cin>>str;
        if (str.find('+')!=string::npos)
            x++;
        else
            x--;

        n--;
    }
    cout<<x;
}
