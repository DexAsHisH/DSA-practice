#include<iostream>
using namespace std;


int main(){

    string str,str1;
    cin>>str>>str1;

    int arr[256]={0},arr2[256]={0};

    for(int i =0;i<str.length();i++){
        arr[str[i]]+=1;
    }
    for(int i =0;i<str1.length();i++){
        arr2[str1[i]]+=1;
    }
    int flag = 1;
    for(int i =0;i<256;i++){
        if(arr[i]!=arr2[i]){
            flag=0;
            break;
        }
    }

    if(flag)
    { cout<<"Anagram"<<endl;
    }
    else {
        cout<<"not an Anagram"<<endl;
    }
}