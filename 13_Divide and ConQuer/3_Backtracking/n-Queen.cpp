#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>>&board,int n){
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<board[i][j]<<"  " ;
    }
    cout<<endl;
 }
 cout<<endl<<endl;
}

bool isSafe(int row, int col, vector<vector<char>>& board, int n){
    // Check row
    int j = col;
    while(j >= 0){
        if(board[row][j] == 'Q'){
            return false;
        }
        j--;
    }

    // Check upper left diagonal
    int i = row;
    j = col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    // Check lower left diagonal
    i = row;
    j = col;
    while(i < n && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    
    // If everything is okay then return true
    return true;
}

void solve(vector<vector<char>>&board,int col, int n){
    //base case
    if(col >= n){
        //means crossed all column  
        printSolution(board,n);
        return;
    } 

    //solve 1 case and use recursion and backtrack 
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            //if safe then put the queen 
            board[row][col] ='Q';

            //recursive call
            solve(board,col+1,n);

            //backtrack bcz we are usign pass by reference
            board[row][col] = '-';
        }
    }
}

int main(){
    int n;
    cout<<"enter the no. of queen ";
    cin>>n;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col =0;
    solve(board,col,n);
    return 0;
}