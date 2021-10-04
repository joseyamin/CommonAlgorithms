#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr){
    for(auto &x: arr){
        cout << x;
    }
    cout << "\n";
}


void permute(vector<int> arr, int pos,int n){
    if(pos==n){
        printArr(arr);
        return;
    }

    for(int i=pos;i<n;i++){
        swap(arr[i],arr[pos]);
        permute(arr,pos+1,n);
        swap(arr[i],arr[pos]);
    }

}



int main(){
    int n;
    cin >> n;
    vector<int> arr=vector<int>(n);
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    permute(arr,0,n);
}