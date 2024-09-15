#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while (n > 0) {
        int x;
        cin >> x;
        v.push_back(x);
        n--;
    }
    int x = 0;
    while (x <= *max_element(v.begin(), v.end())) {
        x++;
        auto it = find(v.begin(), v.end(), x);
        if (it != v.end()) {
            cout <<distance(v.begin(), it)+1<<" ";
        }
    }
    return 0;
}