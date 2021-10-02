#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int N=5;

void printArr(int arr[]){
    printf("{");
    for(int i=0;i<3;i++){
        printf(" %d ",arr[i]);
    }
    printf("}\n");
}

// r being combo sizes
void combos(int arr[],int new[],int r,int pos,int total){
    if(total==r){
        printArr(new);
        return;
    }
    if(pos==N){
        return;
    }
    new[total]=arr[pos];
    combos(arr,new,r,pos+1,total+1);
    combos(arr,new,r,pos+1,total);
    return;
}


int main()
{
    int arr[5]={1,2,3,4,5};
    // print combinations of size 3
    // 5c3 = 10 total combos
    int new[3];
    combos(arr,new,3,0,0);
}