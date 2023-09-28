#include<iostream>
using namespace std;

bool find(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' or s[i]=='4' or s[i]=='9'){
            cnt++;
        }
        else{
            return false;
        }
    }
    if(cnt==s.size()){
        return true;
    }
    return false;
}

int main(){
    int m,n;
    cin>>m>>n;
    if(m>n)return -1;

    int cnt=0;
    for(int i=m;i<=n;i++){
        string s=to_string(i);
        if(find(s)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

