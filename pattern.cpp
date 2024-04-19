#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i == 0 || i == n){
                cout<<"*";
            }else if(j == 0 || j == n){
                cout<<"*";
            }else if(i==j || i+j == n){
                cout<<"*";
            }else{
                cout<<" ";
            }

        }cout<<endl;
    }
}