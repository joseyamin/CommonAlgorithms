#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//The subsets of {a, b, c} are {a}, {b}, {c}, {a, b}, {b, c}, {a, c}, {a, b, c}, and the empty set {}.
//2^n subsets (almost as bad as n!)
//this algo caps out around n=20

int N=3;

void printArr(char arr[]){
    printf("{");
    for(int i=0;i<N;i++){
        printf(" %c ",arr[i]);
    }
    printf("}\n");
}

void subset(char arr[], int pos){
    if(pos==N){
        printArr(arr);
        return;
    }
    subset(arr,pos+1);
    char temp=arr[pos];
    arr[pos]=' ';
    subset(arr,pos+1);
    arr[pos]=temp;
}


//bits will create all possible combinations
// 2^n
// 0={}
// 2^N-1 = 111 = {a,b,c}
void subsetBitMasking(char arr[]){
    // 1<<N is 2^N
    for(int i=0;i<(1<<N);i++){
        printf("{");
        for(int j=0;j<N;j++){
            if(i&(1<<j)){
                printf(" %c ",arr[j]);
            }
        }
        printf("}\n");
    }
}



int main()
{
    char arr[]={'a','b','c'};
    subset(arr,0);
    subsetBitMasking(arr);
}