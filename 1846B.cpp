#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

char board[3][3];

void solve(){
    cin >> board[0][0] >> board[0][1] >> board[0][2];
    cin >> board[1][0] >> board[1][1] >> board[1][2];
    cin >> board[2][0] >> board[2][1] >> board[2][2];
    for (int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] and board[i][0] == board[i][2]){
            if (board[i][0] != '.'){
                cout << board[i][0] << nl;
                return;
            }
        }
        if(board[0][i] == board[1][i] and board[0][i] == board[2][i]){
            if (board[0][i] != '.'){
                cout << board[0][i] << nl;
                return;
            }
        }
    }
    if(board[0][0] == board[1][1] and board[0][0] == board[2][2]){
        if (board[0][0] != '.'){
            cout << board[0][0] << nl;
            return;
        }
    }
    if(board[0][2] == board[1][1] and board[0][2] == board[2][0]){
        if (board[0][2] != '.'){
            cout << board[0][2] << nl;
            return;
        }
    }
    cout << "DRAW" << nl;
}


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
