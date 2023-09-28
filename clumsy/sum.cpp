#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;


void printPair(int v[],int sum,int n){
   
    unordered_set<int>st;

    for(int i=0;i<n;i++){
        int temp = sum - v[i];
        if(st.find(temp)!=st.end()){
            cout<<"("<<temp<<","<<v[i]<<")";
        }
        st.insert(v[i]);
    }
}

int main(){
    
    int v[]={1,5,7,-1,5};
     int n = sizeof(v)/sizeof(v[0]);
    int sum =6;

    printPair(v,sum,n);


}