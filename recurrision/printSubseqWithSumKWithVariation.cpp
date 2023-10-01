#include<iostream>
#include<vector>
using namespace std;


//this method is use when you only need to print one subseq whose sum is to the given sum.

 bool solve(int arr[],int n,int k,vector<int>&ans,int sum,int i){

    if(i == n){
        if(sum == k){
            for(auto it :ans){
                cout<<it<<" ";  
            }
            cout<<endl;
            return true;
        }
            return false;
    }

    ans.push_back(arr[i]);
    sum+=arr[i];
    if(solve(arr,n,k,ans,sum,i+1)==true) return true;

    ans.pop_back();
    sum-=arr[i];
    if(solve(arr,n,k,ans,sum,i+1)==true) return true;
    
    return false;
 }
int main(){


    int arr[] = {1,2,1};
    int n = 3;
    int k = 2;

    vector<int> ans;
    solve(arr,n,k,ans,0,0);
}