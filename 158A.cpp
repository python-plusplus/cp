#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i<n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    int j = 0;
    for (int i: v){
        if (i >= v[k - 1] && i > 0){
            j++;
        }
    }
    cout << j;
    return 0;
}
