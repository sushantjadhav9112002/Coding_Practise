#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello";
    map<char,vector<int>> m;
    for(int i=0; i<s.length(); i++){
        m[s[i]].push_back(i);
    }
    for(auto entry :m){
        cout<<entry.first<<" : ";
        for(int i=0; i<entry.second.size(); i++){
            cout<<entry.second[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}