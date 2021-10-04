#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

//standard Fibonacci
int fib(int x){
    if(x==1 || x==2){
        return 1;
    }
    return fib(x-1)+fib(x-2);
}

//Dynamic Programming Fibonacci
int fibDP(int x){
    if(dp[x]!=0){
        return dp[x];
    }
    if(x==1 || x==2){
        return 1;
    }
    return dp[x]=fibDP(x-1)+fibDP(x-2);
}



int main(){
    int n;
    cin >> n;

    dp=vector<int>(n,0);
    int x=fibDP(n);

    cout << x;
    return 0;
}