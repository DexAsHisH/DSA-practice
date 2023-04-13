#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){


    int arr[] = {1,3,5,7,9,11};
    int arr2[] = {2,4,6,8,10,12};

    int size=6;
    int size2=6;
    int i=0;
    int j=0;
    vector<int> ans;

    while(i<=size && j<size2){
        if(arr[i]<arr2[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else if(arr[i] >arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(int i =0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
}