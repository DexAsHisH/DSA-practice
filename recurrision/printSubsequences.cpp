#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[],vector<int> ans,int n,int indx){
    if(indx == n){
        for(auto it: ans){
            cout<<it<<" ";
        }
        return;
    }

    //take
    ans.push_back(arr[indx]);
    solve(arr,ans,n,indx+1);
    //not take
    ans.pop_back();
    solve(arr,ans,n,indx+1);
}

int main(){

    int arr[] = {3,1,2};
    int n =3;
    vector<int> ans;

    solve(arr,ans,n,0);
}