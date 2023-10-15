#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){

    
    for(int i =0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                 mini = j;
            }
        }
        swap(arr[mini],arr[i]);
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

    selectionSort(arr,n);
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
        
    }

    
}