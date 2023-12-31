#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> arr;
vector<int> pre;
int prem;
int getM(vector<int> v){
    int m = -inf;
    for (int i: v) {
        m = max(m, i);
    }
    return m;
}

void makePre(){
    for (int i = 0; i < pre.size(); i++) {
        pre[i] ^= prem; 
    } 
}

void solve(){
    arr.clear();
    pre.clear();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
        pre.push_back(0);
    }
    int curr = arr[n-1];
    pre[n-1] = curr;
    for (int i = n-2; i >= 0; i--){
        curr ^= arr[i];
        pre[i] = curr;
    } 
    prem = getM(pre);
    int prek;
    while(true){
        makePre();
        prek = getM(pre);
        if(prek > prem){
            prem = prek;
        }
        else{
            break;
        }
    }
    cout << prem << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve(); 
    }
}
