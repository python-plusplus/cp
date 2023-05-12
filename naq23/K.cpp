#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a + b);
    v.push_back(a - b);
    v.push_back(a * b);
    if (a % b == 0){
        v.push_back(a / b);
    }
    int mini = 1000000;
    for (auto & it : v){
        if(it + c >= 0){
            int h = it + c;
            mini = min(mini, h);
        }
        if(it - c >= 0){
            int i = it - c;
            mini = min(mini,i); 
        }
        if(it * c >= 0){
            int j = it * c;
            mini = min(mini, j);
        }
        if(it % c == 0 && it / c >= 0){
            int k = it / c;
            mini = min(mini, k);
        }
    }
    cout << mini;
}
