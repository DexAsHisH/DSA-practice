#include<iostream>
using namespace std;

int solve(int wt[],int value[],int cap){
    int n = 3;
    int dp[n+1][cap+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=cap;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=cap;j++){

            if(wt[i-1]<=j){
                dp[i][j] = max(value[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][cap];
}

int main(){

    int wt[] = {2,1,3};
    int value[]={12,10,20};
    int cap = 5;
    int ans = solve(wt,value,cap);
    cout<<ans<<" ";
}