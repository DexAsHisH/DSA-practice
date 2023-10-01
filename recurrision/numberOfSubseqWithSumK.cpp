#include<iostream>
#include<vector>
using namespace std;

 int solve(int arr[],int n,int k,int sum,int i){

    if(i == n){
        if(sum == k) return 1;

        return 0;
    }

    sum+=arr[i];
    int l = solve(arr,n,k,sum,i+1);
    sum-=arr[i];
    int r= solve(arr,n,k,sum,i+1);
    return l+r;
 }
int main(){

    int arr[] = {1,2,1};
    int n = 3;
    int k = 2;

    cout<<solve(arr,n,k,0,0)<<endl;
}