#include<iostream>
using namespace std;


int solve(int num,int cnt){
    //base case
    if(num == 0){
        return cnt;
    }
    if(num%10==0){
        return solve(num/10,cnt+1);
    }
    return solve(num/10,cnt);
}


int main(){

    int num = 302260004;
    solve(num,0);
    cout<<solve(num,0);

}