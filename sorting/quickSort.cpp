#include<iostream>

using namespace std;


int partition(int *v,int low ,int high){
    int pivot = v[low];
    int i = low;
    int j = high;

    while(true){
        while(v[i]<= pivot && i<=j){
            i++;
        }
        while(v[j]>pivot && i<=j){
            j--;
        }
        if(i<j) {
            swap(v[i],v[j]);
            }else{
                break;
            }
    }
    swap(v[low],v[j]);
    return j;
}
void qSort(int *v,int low,int high){
    if(low < high){
        int pi = partition(v,low,high);
        qSort(v,low,pi-1);
        qSort(v,pi+1,high);
    }

}
int main(){

    int v[] = {5,4,3,45,7,66,1,2,0};
    int n = sizeof(v)/sizeof(v[0]);
    
    qSort(v,0,n-1);
    for (int i=0;i<n;i++) {
        cout << v[i] << " ";
    }
}