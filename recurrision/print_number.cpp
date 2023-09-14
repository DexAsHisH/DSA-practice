#include<iostream>
using namespace std;


void print(int n){

    if(n==0){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
    cout<<n<<endl;
}

int main(){

    print(5);
}