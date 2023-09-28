#include<iostream>
#include<vector>
using namespace std;


int main(){
    int pip1;
    int pip2;
    int pip3;
    int capacity;
    cin>>pip1;
    cin>>pip2;
    cin>>pip3;
    cin>>capacity;
    vector<int>ans;

    int t1=capacity/pip1;
    int t2=capacity/pip2;
    int t3=capacity/pip3;
    int min1;

    ans.push_back(t1);
    ans.push_back(t2);
    ans.push_back(t3);
    sort(ans.begin(),ans.end());

    
    cout<<ans[0]<<endl;
}