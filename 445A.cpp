#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b; 
    char board[100][100];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            char square;
            cin >> square;
            if (square == '.'){
                if (i == 0){
                    if (j == 0){
                        board[i][j] = 'B';
                    }
                    else{
                        char left = board[i][j - 1];
                        if (left == 'W'){
                            board[i][j] = 'B';
                        }
                        else{
                            board[i][j] = 'W';
                        }
                    }
                }
                else{
                    char up = board[i - 1][j];
                    if (j == 0){
                        if (up == 'B'){
                            board[i][j] = 'W';
                        }
                        else if (up == 'W'){
                            board[i][j] = 'B';
                        }
                        else{
                            char diag = board[i - 1][j + 1];
                            if (j == b - 1){
                                board[i][j] = 'B';
                            }
                            else{
                                if (diag == 'B' || diag == '-'){
                                    board[i][j] = 'B';
                                }
                                else if (diag == 'W'){
                                    board[i][j] = 'W';
                                } 
                            }
                        } 
                    }
                    else{
                        char left = board[i][j - 1];
                        if (left == 'B'){
                            board[i][j] = 'W';
                        }
                        else if (left == 'W'){
                            board[i][j] = 'B';
                        }
                        else{
                            if (up == 'B'){
                                board[i][j] = 'W';
                            }
                            else if (up == 'W'){
                                board[i][j] = 'B';
                            }
                            else{
                                char diag = board[i - 1][j + 1];
                                if (j == b - 1){
                                    board[i][j] = 'B';
                                }
                                else{
                                    if (diag == 'B' || diag == '-'){
                                        board[i][j] = 'B';
                                    }
                                    else if (diag == 'W'){
                                        board[i][j] = 'W';
                                    } 
                                }
                            }
                        }

                    }
                }
            }
            else{
                board[i][j] = square;
            }
        }
    }
    for (int k = 0; k < a; k++){
        cout << "\n";
        for (int j = 0; j < b; j++){
            cout << board[k][j];
        }
    } 
    return 0;
}
