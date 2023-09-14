#include<iostream>
using namespace std;


bool palindrome(string palin,int i,int j){

    int n = palin.length();
    //base condition
    if(i==n/2) return true;
    if(palin[i]!=palin[j]) return false;
   return palindrome(palin,i+1,j-1);
    
}

int main(){

    //121--->121
    string palin = "mam";
    int i=0;
    int j = palin.length()-1;

    if(palindrome(palin,i,j)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}