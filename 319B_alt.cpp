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
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    while(true){
        vector<int> r;
        int prev = v[0];
        r.push_back(v[0]);
        for (int i = 1; i < v.size(); i++) { 
            if (v[i] >= prev){
                r.push_back(v[i]);
            }
            prev = v[i];
        }
        if (r.size() == v.size()){
            cout << total;
            return 0;
        }
        else{
            total++;
            cout << "step " << total << '\n';
            for (int i = 0; i < r.size(); i++) {
                cout << r[i] << ' ';
            }
            cout << '\n';
            v = r;
        }
    }
}
