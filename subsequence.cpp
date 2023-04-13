#include<iostream>
#include<vector>
using namespace std;


void solve(int indx,vector<int> &ans,int arr[],int n){
    int size=ans.size();
    //base case
    if(indx == n){
        for(int i=0;i<size;i++){
            cout<<ans[i]<<" ";
        }
    }

    //to take
    ans.push_back(arr[indx]);
    solve(indx+1,ans,arr,n);
    ans.pop_back();

    //to not take
    solve(indx+1,ans,arr,n);
}

int main(){

    int arr[]={3,1,2};
    int n = 3;
    vector<int> ans;
    solve(0,ans,arr,n);
}