#include <bits/stdc++.h>
using namespace std;

bool checkSwap(string a, string b){
    int difCount = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]){
            difCount++;
        }
        if (difCount > 2){
            return true;
        }
    }
    if (difCount != 2){
        return true;
    }
    return false;
}

vector<string> w;
int n;

int dp(int idx, vector<string> u){
    for (int i = idx; i < n; i++) {

    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        w.push_back(s);
    }
   
    cout << mSwap + 1 << '\n';
}
