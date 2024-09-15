#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    auto it = s.begin();
    if(*it>='a' && *it<='z')
        (*it)-=32;
    cout<<s<<endl;
    return 0;
}
