#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int target){
    int left=0, right=arr.size()-1;

    while(right>=left){
        int mid=right+left/2;

        if(arr[mid]==target){
            return mid;
        }

        if(target<arr[mid]){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return -1;
}

int recBinarySearch(vector<int> &arr,int target,int left,int right){
    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(target<arr[mid]){
        return recBinarySearch(arr,target,left,right-1);
    }
    return recBinarySearch(arr,target,mid+1,right);
}

int main(){
    vector<int> arr={2,5,7,9,23,56,79,234,657,899};
    cout << binarySearch(arr,23) << "\n";
    cout << recBinarySearch(arr,23,0,arr.size()-1) << "\n";
    return 0;
}
