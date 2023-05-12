#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();


int a[200005];
vector<int> v;
vector<int> st;
vector<int> stp;

void solve(){
    v = {};
    st = {};
    memset(a, 0, sizeof(a));
    int n;
    int sum = 0;
    cin >> n;
    v.push_back(0);
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        if (a[k] == 0){
            v.push_back(k);
            a[k] = 1;
            sum++;
        }
        else{
            v.push_back(-1);
            stp.push_back(k);
        }
    } 
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0){
            st.push_back(i);
        }
    }
    bool f = false;
    int z = -1;
    int j;
    for (int i = 1; i <= n; i++) {
        if (v[i] == -1){ 
            if ((st.size() == 0 && z != 1) ||  st.back() == i){
                if (z == -1){
                    if (st.size() == 1){
                        z = st.back();
                        j = stp.back();
                        v[i] = j;
                        f = true;
                        break;
                    }
                    else{
                        z = st.back();  
                        stp.pop_back();
                        st.pop_back();
                        v[i] = st.back();
                        st.pop_back();
                        stp.pop_back();
                    }
                }
                else{
                    v[i] = z;
                    z = -1;
                }
            }
            else{
                v[i] = st.back();
                stp.pop_back();
                st.pop_back();
            }
        }
    }
    if (f){
        for (int i = 1; i <= n; i++) {
            if (v[i] == j){
                v[i] = z;
                break;
            }
        }
    }
    cout << sum << nl;
    for (int i = 1; i <= n; i++) { 
        cout << v[i] << ' ';
    }
    cout << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
