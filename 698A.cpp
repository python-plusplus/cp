#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> v;
int main() {
    int n;
    cin >> n;
    int onFlip = false;
    int flip = false;
    int m = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if(!onFlip){
            if(k == 1){
                onFlip = true;
                flip = false;
            }
            else if (k == 2){
                onFlip = true;
                flip = true;
            }
            else if (k == 0){
                m++;
            }
        }
        else{
            if(k == 1 && flip == false){
                m++;
                onFlip = false;
            }
            else if (k == 2 && flip == true){
                m++;
                onFlip = false;
            }
            else if (k == 0){
                m++; 
                onFlip = false;
            }
            else{
                flip = !flip;
            }
        }
    }
    cout << m;
    return 0;
}
