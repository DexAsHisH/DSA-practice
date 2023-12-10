#include<iostream>
using namespace std;

struct Items{
        int value;
        int weight;
    };

 bool compare(Items &a,Items &b){
    return a.value/(double)a.weight > b.value/(double)b.weight;
}

double solve(int W,Items *items,int n){

    sort(items,items+n,compare);
    double max_val =0;
    int curr_wt = 0;

    for(int i=0;i<n;i++){
        if(curr_wt+items[i].weight<=W){
            curr_wt+=items[i].weight;
            max_val+=items[i].value;
        }
        else{
            int rem = W-curr_wt;
            max_val += items[i].value * (rem/(double)items[i].weight);
            break;
        }
    }
    return max_val;
}

int main(){

    int n;
    cin>>n;

    Items items[n];

    for(int i=0;i<n;i++){
        cin>>items[i].value;
    }
    for(int i=0;i<n;i++){
        cin>>items[i].weight;
    }
    int W;
    cin>>W;

    cout<<solve(W,items,n)<<" ";
}