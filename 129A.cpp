#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main(){
    int n;
    cin >> n;
    int even = 0;
    int sum = 0;
    for (int i = 0; i<n; i++){
        int k;
        cin >> k;
        if (k % 2 == 0){
            even++;
        }
        sum += k;
    }
    if (sum % 2 == 1){
        cout << n - even;
    }
    else{
        cout << even;
    }
    return 0;
}
