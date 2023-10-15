#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){

    
    for(int i =0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    } 
}

int main(){

    int n;
    cout<<"enter your size of an array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter your element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(arr,n);
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
        
    }

    
}