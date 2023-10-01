#include<iostream>
#include<vector>
using namespace std;


void solve(int arr[],int n,int k,int sum,int i,vector<int> &ans){
        
        if(i==n){
        
        if(sum == k){
            for(auto it: ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
        }
    

    ans.push_back(arr[i]);
    sum +=arr[i];
    solve(arr,n,k,sum,i+1,ans);
    sum-=arr[i];
    ans.pop_back();
    solve(arr,n,k,sum,i+1,ans);
    return;

}

int main(){

    int arr[]={1,2,1};
    int k=2;
    int n = 3;
    vector<int> ans;
    
    solve(arr,n,k,0,0,ans);
}
