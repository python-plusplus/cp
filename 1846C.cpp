#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> v;
int n, m, h;

pair<int,int> getScore(vector<int> w){
    int f = 0;
    int t = 0;
    int pen = 0;
    int p = 0;
    for (int k: w) {
        t += k;
        if (t > h){
            break;
        }
        p++;
        pen += t;
        cout << pen;
        f += pen;
        
    }
    return {p, f};
}

void solve(){
    v.clear();
    cin >> n >> m >> h;
    pair<int,int> r;
    int place = 1;
    for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            v.push_back(a);
    }
    sort(v.begin(), v.end());
    r = getScore(v);
    cout << r.first << r.second << nl;

    for (int i = 0; i < n-1; i++) {
        v.clear();
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        pair<int,int> s = getScore(v);
        if (r.first == s.first){
            if (r.second > s.second){
                place++;
            }
        }
        else if (r.first < s.second){
            place++;
        }
    }
    cout << place << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve(); 
    }
}
