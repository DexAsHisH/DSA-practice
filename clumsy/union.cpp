#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

    int arr1[] = {1,2,3,4,8};
    int arr2[] = {2,6,8,9};

    int size1=5;
    int size2=4;
    int i=0;
    int j=0;

    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }

        while(i< size1){
            cout<<arr1[i]<<" ";
        }
        while(j< size2){
            cout<<arr2[j]<<" ";
        }

    }
}