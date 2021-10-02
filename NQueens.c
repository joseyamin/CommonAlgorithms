#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;

void printBoard(int board[n][n]){
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            printf("%d",board[r][c]);
        }
        printf("\n");
    }
}

int validSpot(int board[n][n],int r,int c){
    for(int i=0;i<n;i++){
        if(board[i][c]){
            return 0;
        }
    }
    for(int i=r, j=c; i>=0 && j>=0;i--,j--){
        if(board[i][j]){
            return 0;
        }
    }
    for(int i=r, j=c; i<n && j<n;i++,j++){
        if(board[i][j]){
            return 0;
        }
    }

    return 1;
}

int go(int board[n][n],int r){
    if(r==n){
        printBoard(board);
        return 1;
    }
    for(int c=0;c<n;c++){
        if(validSpot(board,r,c)){
            board[r][c]=1;
            if(go(board,r+1)){
                return 1;
            }
            board[r][c]=0;
        }
    }
    return 0;
}



int main(){
    scanf("%d",&n);
    int board[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            board[r][c]=0;
        }
    }
    go(board,0);

}