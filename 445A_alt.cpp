#include <bits/stdc++.h>

using namespace std;

int main(){
    int height, width;
    cin >> height >> width; 
    char board[100][100];
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            char sq;
            cin >> sq;
            if ((i+j) % 2 == 0 && sq == '.'){
                board[i][j] = 'B';
            }
            else if ((i+j) % 2 == 1 && sq == '.'){
                board[i][j] = 'W';
            }
            else{
                board[i][j] = '-';
            }
        }
    }
    for (int k = 0; k < height; k++){
        cout << "\n";
        for (int j = 0; j < width; j++){
            cout << board[k][j];
        }
    } 
 
    return 0;
}
