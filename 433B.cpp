#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> stones;
    vector<ll> sorted;
    vector<ll> sums;
    vector<ll> s_sums;
    ll answers[100000];
    ll accum = 0;
    ll accum2 = 0;

    for (int i = 0; i < n; i++){
        ll cost;
        cin >> cost;
        accum += cost;
        sums.push_back(accum);
        stones.push_back(cost);
        sorted.push_back(cost);
    }

    sort(sorted.begin(), sorted.end());

    for (int i = 0; i < n; i++){
        accum2 += sorted[i];
        s_sums.push_back(accum2);
    }

    cin >> n;
    for (int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if (a == 1){
            if (b == 1){
                answers[i] = sums[c - 1];
            }
            else{
                answers[i] = sums[c - 1] - sums[b - 2];
            }
        }
        else{
            if (b == 1){
                answers[i] = s_sums[c-1];
            }
            else{
                answers[i] = s_sums[c-1] - s_sums[b-2];
            }
        }
    }
    for (int j = 0; j < n; j++){
        cout << answers[j] << "\n";
    } 
 
    return 0;
}
