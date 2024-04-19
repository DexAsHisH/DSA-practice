#include<iostream>

using namespace std;


int partition(int *v,int low ,int high){
    int pivot = v[low];
    int i = low;
    int j = high;

    while(i<j){
        while(v[i]<= pivot && i<=high-1){
            i++;
        }
        while(v[j]>pivot && i<=low+1){
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

    int v[] = {5,4,3,2,1};
    int n = sizeof(v)/sizeof(v[0]);
    
    qSort(v,0,n-1);
    for (int i=0;i<n;i++) {
        cout << v[i] << " ";
    }
}