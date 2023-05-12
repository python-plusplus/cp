#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

unordered_map<int,int> m;

int main() {
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (m.count(k) > 0){
            m[k]++;
        }
        else{
            m[k] = 1;
        }

        sum += k;
    }
    if (m.count(0) == 0 && m[0] == 0){
        cout << -1;
        return 0;
    }

    int a[] = {1, 4, 7};
    int b[] = {2, 5, 8};

    bool f = false;
    if (sum % 3 == 1){
        for (int i: a){
            if (m[i] > 0){
                m[i]--;
                f = true;
                break;
            }
        }
        if (f == false){
            for (int i : b){
                for (int j: b){
                    if(m[i] > 0){
                        m[i]--;
                        if (m[j] > 0){
                            m[j]--;
                            f = true;
                            break;
                        }
                        m[i]++;
                    } 
                }
            }
        }
        if (!f){
            cout << -1;
            return 0;
        }
    }
    else if (sum % 3 == 2){
        for (int i: b){
            if (m[i] > 0){
                m[i]--;
                f = true;
                break;
            }
        }
        if (f == false){
            for (int i : a){
                for (int j: a){
                    if(m[i] > 0){
                        m[i]--;
                        if (m[j] > 0){
                            m[j]--;
                            f = true;
                            break;
                        }
                        m[i]++;
                    }
                }
            }
        }
        if (!f){
            cout << -1;
            return 0;
        }
   }    
    bool t = false;
    for (int i = 9; i >= 0; i--) {
        if (!t and i == 0){
            cout << 0;
            break;
        }
        while(m[i] > 0){
            t = true;
            cout << i;
            m[i]--;
        }
    }
    return 0;
}
