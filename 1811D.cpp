#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

pair<int, int> fib(pair<int,int> p){
    return make_pair(p.second, p.first + p.second);
}

vector<int> fib1;
vector<int> fib2;
bool currPar = false;
int currFib = 3; 
pair<int, int> currPair = {1, 1}

void solve(){
    int a, x, y;
    cin >> a >> x >> y;
    if (a > currFib){
        for (int i = currFib; i < a; i++) {
            if (currPar){
                fib1.push_back(currPair.second);
            }
            else{
                fib2.push_back(currPair.second);
            }
            currPair = fib(currPair);
        }
        currFib = a;
    }
    if (a % 2 != 0){
        // a is odd
        //We use odd fib list for x
    }
    else{

    }
}
int main() {
    for (int i = 0; i < currFib; i++) {
        if (currPar){
            fib1.push_back(currPair.second);
        }
        else{
            fib2.push_back(currPair.second);
        }
        currPair = fib(currPair);
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
