#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, pair<int, int>> m;
    map<int, int> l;

    for (int i = 0; i<n; i++){
        int k;
        cin >> k;
        if (m.count(k) > 0){
            if (m[k].second == 0){
                pair<int, int> t = {i, i-m[k].first};
                m[k] = t;
            }
            else if (i - m[k].first != m[k].second){
                m[k].second = -1;
                l[k] = 1;

            }
            else{
                m[k].first = i;
            }
        }
        else{
            pair<int,int> t = {i, 0};
            m[k] = t;
        }
    }
    cout << m.size() - l.size() << "\n";
    for (auto it = m.begin(); it != m.end(); it++){
        if ((it->second).second >= 0){
            cout << it->first << " " << (it->second).second << "\n";
        }
    }

    return 0;
}
