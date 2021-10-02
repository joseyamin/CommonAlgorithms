#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int N=4;

void printArr(int arr[]){
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void permute(int arr[],int pos){
    if(pos==N){
        //finished
        printArr(arr);
        return;
    }

    for(int i=pos;i<N;i++){
        int temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
        permute(arr,pos+1);
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
}



int main()
{
    int arr[4]={1,2,3,4};
    permute(arr,0);
}