//DFS
//
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> adj[100005];
bool problemchild[100005];
int total = 0;
vector<int> converts;

bool DFS(int parent, int u){
    bool converted = false;
    for(int v : adj[u]){ 
        if (v != parent && DFS(u, v) == true){
            problemchild[u] = false;
            converted = true;
        }
    }
    if (problemchild[u] == true){
        converts.push_back(u);
        converted = true;
        problemchild[u] = false;
        total++;
    }
    return converted;
}

int main() {
    memset(problemchild, false, sizeof(problemchild));
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back(b);
        adj[b].push_back(a);
        if (c == 2){
            problemchild[b] = true;
            problemchild[a] = true;
        }
    }
    //dfs
    DFS(0, 1);
    cout << total << nl;
    for(int g : converts){
        cout << g << ' ';
    }
}
