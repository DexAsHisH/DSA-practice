#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int arr[]={2,-1,-5,-2,4,6,5};
    int size=7;

    for(int i =0;i<size;i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
        
    }
    for(int i =0;i<size;i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
        }
    }
    


}