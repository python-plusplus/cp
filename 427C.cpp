#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

ll costs[100005];
vector<int> streets[100005];
vector<int> st;
bool stackmember[100005];
int disc[100005];
int low[100005];
int t= 0;

ll cost = 0;
ll nOfWays = 1;

void SCCUtil(int node){
    st.push_back(node);
    stackmember[node] = true;
    disc[node] =  low[node] = ++t;

    for (auto v: streets[node]) {
        if (disc[v] == -1){
            SCCUtil(v);
            low[node] = min(low[v], low[node]);
        }
        else if (stackmember[v] == true){
            low[node] = min(low[node], disc[v]);
        }
    }
    int w;
    int minCost = inf;
    int sameMinInCycle = 1;
    if (low[node] == disc[node]){
        //cout << "cycle" << '\n';
        while (st.back() != node){
            w = st.back();
            //cout << w << ' ';
            st.pop_back();
            stackmember[w] = false;
            if (costs[w] < minCost){
                minCost = costs[w];
                sameMinInCycle = 1;
            }
            else if (costs[w] == minCost) {
                sameMinInCycle++;
            }
        }
        w = st.back();
        //cout << w << ' ';
        //cout << '\n';
        st.pop_back();
        stackmember[w] = false;
        if (costs[w] < minCost){
                minCost = costs[w];
                sameMinInCycle = 1;
            }
            else if (costs[w] == minCost) {
                sameMinInCycle++;
            }      
        nOfWays *= sameMinInCycle;
        cost += minCost;
    }
}

int main() {
    costs[0] = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ll k;
        cin >> k;
        costs[i] = k;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        ll a, b;
        cin >> a >> b;
        streets[a].push_back(b); 
    }
    memset(disc, -1, sizeof(disc));
    memset(low, -1, sizeof(low));
    memset(stackmember, false, sizeof(stackmember));
    for (int i = 1; i <= n; i++) {
        if (disc[i] == -1){
            SCCUtil(i);
        }
    }
    cout << cost << ' ' << nOfWays % 1000000007;
    return 0;
}
