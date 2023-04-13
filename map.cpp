#include <iostream>
#include <map>
using namespace std;

void print(map<int, string> &mp){
    for(auto &it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{

    map<int, string> mp;
    mp[1] = "ashish";
    mp[3] = "dabral";
    mp[2] = "hello";
    mp[4] = "world";

     print(mp);
    
    //------iterating ways in map-----

    //1.way 
    //map<int,string> ::iterator it;
    /*for (it = mp.begin(); it != mp.end(); ++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/

    //2.way
    /*
    for(auto &it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }*/
   
    
}