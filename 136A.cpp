#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main(){
    int n;
    cin >> n;
    int p[10000];
    for(int i=1;i<n+1;i++){
        int k;
        cin >> k;
        p[k] = i;
    }
    for (int i=1;i<n+1;i++){
        cout << p[i] << " ";
    }
    return 0;
}
