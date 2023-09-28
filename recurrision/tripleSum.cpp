#include<iostream>
using namespace std;

int solve(int n){
    if(n==1 || n==0) return n;

    return solve(n-1) + solve(n-2) +solve(n-3);
}
int main(){
    int n;
    cin>>n;

   cout<<solve(n);
}