#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<vector<char>> &board, int row, int col, char c){
    for(int i=0;i<9;i++){
        if(board[i][col]==c){
            return false;
        }
        if(board[row][i]==c){
            return false;
        }
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<char>> &board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='.'){
                for(char c='1';c<='9';c++){
                    if(isValid(board,i,j,c)){
                        board[i][j]=c;
                        if(solve(board)==true){
                            return true;
                        }
                        else{
                            board[i][j]='.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}


void solveSoduko(vector<vector<char>> &board){
    solve(board);
}
int main(){
    int n;
    cin>>n;
    vector<vector<char>> board;
    for(int i=0;i<n;i++){
        vector<char> temp;
        for(int j=0;j<n;j++){
            char x;
            cin>>x;
            temp.push_back(x);
        }
        board.push_back(temp);
    }
    solveSoduko(board);
    for(int i=0;i<board.size();i++) {
        for(int j=0;j<board[i].size();j++) {
            cout<<board[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}