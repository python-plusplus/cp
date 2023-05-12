#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();


vector<vector<bool>> v;
vector<pair<int, int>> edges;

int main() {
    bool f = true;
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++) {
        vector<bool> w;
        bool fb = false;
        pair<int, int> f;
        pair <int, int> e;
        for (int j = 0; j < y; j++) {
            char c;
            cin >> c;
            if (c == 'B') {
                w.push_back(true);
                e = {i, j};
                if (!fb) {f = {i, j}; fb = true;}
            }
            else w.push_back(false);
        }
        if (fb){
            if (f == e){
                edges.push_back(f);
            }
            else{
                edges.push_back(f);
                edges.push_back(e);
            }
        }
        v.push_back(w);
    }
    for (int i = 0; i < edges.size(); i++) {
        for (int j = i+1; j < edges.size(); j++) { 
            //cout << edges[i].first << edges[i].second << nl;
            //cout << edges[j].first << edges[j].second << nl;
            bool b = false;
            bool c = false;
            for (int k = edges[i].first; k < edges[j].first; k++) {
                if (!v[k][edges[i].second]){
                    b = true;
                }
            }
            for (int l = edges[i].second; l < edges[j].second; l++){
                if(!v[edges[j].first][l]){
                    b = true;
                }
            }
            for (int l = edges[i].second; l > edges[j].second; l--){
                if(!v[edges[j].first][l]){
                    b = true;
                }
            }

            for (int k = edges[i].first; k < edges[j].first; k++) {
                if (!v[k][edges[j].second]){
                    c = true;
                }
            }
            for (int l = edges[i].second; l < edges[j].second; l++){
                if(!v[edges[i].first][l]){
                    c = true;
                }
            } 
            for (int l = edges[i].second; l > edges[j].second; l--){
                if(!v[edges[i].first][l]){
                    c = true;
                }
            } 

            if (!b || !c){
                ;
            }
            else{
                cout << "NO" << nl;
                return 0;
            }
        }
    }
    cout << "YES" << nl;
    return 0;
}
