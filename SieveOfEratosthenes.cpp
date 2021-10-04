#include <bits/stdc++.h>

using namespace std;

//sieve of eratosthenes
void sieve(vector<int>& arr){
    //edge case 0 and 1 are not prime
    arr[0]=arr[1]=0;
    //from 2 - sqrt n
    for(int i=2;i*i<arr.size();i++){
        //if i is prime we need to flip its multiples
        if(arr[i]==1){
            for(int j=i+i;j<arr.size();j+=i){
                arr[j]=0;
            }
        }
    }

}


int main(){
    int n;
    cin >> n;
    //asume all numbers are prime
    vector<int> arrPrime=vector<int>(n+1,1);
    sieve(arrPrime);
    for(auto &x: arrPrime){
        cout << x;
    }
}