#include<iostream>
using namespace std;


void reverse(string& str,int n){
    int i =0;
    int j = n-1;
    while(i<=j){
        int temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main(){
    string str = "ashish";
    string ans = str;
    int n = str.length();
    reverse(str,n);
    
    if(ans == str){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}