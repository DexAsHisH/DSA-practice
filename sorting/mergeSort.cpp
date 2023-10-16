#include<iostream>
#include<vector>
using namespace std;


void merge(int *v,int low,int mid,int high){
    vector<int> helper;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            helper.push_back(v[left]);
            left++;
        }
        else{
            helper.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid){
        helper.push_back(v[left]);
        left++;
    }
    while(right<=high){
        helper.push_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        v[i] = helper[i - low];
    }
}
void mSort(int *v,int low,int high){
    if(low >= high) return;

    int mid = low +(high-low)/2;
    mSort(v,low,mid);
    mSort(v,mid+1,high);
    merge(v,low,mid,high);
}
int main(){

    int v[] = {5,4,9,2,0};
    int n = sizeof(v)/sizeof(v[0]);
    
    mSort(v,0,n-1);
    for (int i : v) {
        cout << i << " ";
    }
}