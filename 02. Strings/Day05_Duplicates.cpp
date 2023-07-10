#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main() {
    string str = "test string";
    // geeksforgeeks
    unordered_map<char,int> mp;
    
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    
    for(auto i:mp){
        if(i.second >1)
         cout<<i.first<<" "<<i.second<<endl;}
        
    return 0;
}