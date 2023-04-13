#include<iostream>
using namespace std;

//global variable that will store the reverse of number.
int sum=0;

void solve(int num){
    //base case
    if(num == 0){
        return;
    }
    sum = (sum*10) + num%10;
    solve(num/10);
    
}

int main(){

    int num = 182;
    solve(num);
    cout<<sum;

}