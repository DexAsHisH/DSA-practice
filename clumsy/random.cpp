#include<iostream>
using namespace std;

int main(){

    string str,str2;
    cin>>str>>str2;

    int j=0;
    int k =1;

    for(int i=0;i<str2.length();i++){
        if(str2[i]==str[j]){
            k++;
            j++;
        }
    }
    cout<<k<<endl;
}