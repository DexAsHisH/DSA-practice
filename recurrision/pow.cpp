#include<iostream>
using namespace std;

int pow(int num,int pw){

    if(pw == 1) return num;
    return num * pow(num,pw-1);
}

int main(){

    //2^2--->4
    int num;
    int pw;
    cout<<"enter your number: ";
    cin>>num;
    cout<<"enter your power: ";
    cin>>pw;

   cout<<pow(num,pw)<<endl;
}

