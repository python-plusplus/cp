#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();


int main() {
    vector<int> v; 
    int n;
    int total;
    cin >> n;
    int t;
    cin >> t; 
    int RB = t;
    int ms = 0;
    int s = 0;
    int m = -inf;
    for (int i = 1; i < n; i++){
        int k;
        cin >> k;
        if (k >= RB){
            RB = k;
            ms = s;
            s = 0;
            m = -inf;
        }
        else{
            
            if (k > m){
                s++;
                cout << "k: " << k << " m: " << m << " s: " << s << '\n';
                m = k;
            }
            if (s == 1){
                m = k;
            }
        }
    }
    cout << max(ms, s);
}
