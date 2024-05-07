#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int,bool>rowCheck;
unordered_map<int ,bool>upperLeftDiagonalCheck;
unordered_map<int ,bool>bottomLeftDiagonalCheck;


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
    
   if(rowCheck[row]==true){
    return false;
   }

   if(upperLeftDiagonalCheck[n-1+col-row]==true){
    return false;
   }

   if(bottomLeftDiagonalCheck[row + col] == true){
    return false;
   }

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
            rowCheck[row] = true;
            upperLeftDiagonalCheck[n-1+col-row] =true;
            bottomLeftDiagonalCheck[row+col] =true;

            //recursive call
            solve(board,col+1,n);

            //backtrack bcz we are usign pass by reference
            board[row][col] = '-';
            rowCheck[row] = false;
            upperLeftDiagonalCheck[n-1+col-row] =false;
            bottomLeftDiagonalCheck[row+col] =false;
        }
    }
}

int main(){
    int n;
    cout<<"enter the no. of queen:";
    cin>>n;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col =0;
    solve(board,col,n);
    return 0;
}