#include<iostream>
using namespace std;


bool solve(string str,string str2){
    int n= str.length();
    int m = str2.length();

    int i=0;
    int j=0;

    while(i<n && j<m){
        if(str[i]==str2[j]){
            i++;
            j++;
        }
        else if(str[i]!=str2[j] && j!=0){
            j=0;
        }
        else if(str[i]!=str2[j] && j==0){
            i++;
        }
    }
    if(j==m){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    string str = "abbaabacbada";
    string str2 = "abba";

    if(str.length()<str2.length()){
        cout<<"INVALID COMPARE";
    }
   if(solve(str,str2)){
    cout<<"TRUE";
   }
   else{
    cout<<"FALSE";
   }
}