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

bool palin(int num){
    if(sum== num){
        return true;
    }
    return false;
}
int main(){

    int num = 121;
    solve(num);
    cout<<sum<<endl;
    if(palin(num)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}