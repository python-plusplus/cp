#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int v[100005];

int solve(){
    memset(v, 0, sizeof(v));
    int n;
    cin >> n;
    n = n - 1;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v[i] = m;
    }
    bool zeroAdded = false;
    bool sameConsec = false;
    bool flip = false;
    int prev = v[0];
    cout << prev << " ";
    for (int i = 1; i < n; i++) {
        if (!zeroAdded){
            if (v[i] > prev){
                if (i < n - 1 && v[i + 1] == v[i]){
                    cout << 0 << " ";
                }
                else{
                    cout << 0 << " ";
                    cout << v[i] << " ";
                    zeroAdded = true;
                }
            }
            else{
                cout << v[i] << " ";
            }
        }
        else if (!flip){
            if (i < n-1 && v[i + 1] < v[i] && v[i - 1] == v[i]){
                //Since all arrays are possible we dont need to check if v[i - 1] == v[i]
                cout << 0 << " ";
                flip = !flip;
                
            }
            else{
                cout << v[i] << " ";
            }
        }
        else{
            if (v[i] > prev){
                if (i < n - 1 && v[i + 1] == v[i]){
                    cout << 0 << " ";
                    flip = !flip;
                }
                else{
                    cout << v[i] << " ";
                }
            }
            else{
                cout << v[i] << " ";
            }
        }
        prev = v[i];
    }
    if (zeroAdded){
        cout << nl;
    }
    else{
        cout << 0 << " " << nl;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
