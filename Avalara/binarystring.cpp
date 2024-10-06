#include<bits/stdc++.h>
using namespace std;

bool isvalid(string& s){
    for(int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
            return false;
        }
    }
    return true;
}

int countvalidsubstrings(string & s,int mini, int maxi){
    int i=0, j=0;
    // string a="";
    int count=0;

    while(j<s.length()){
        if(isvalid(s.substr(i,j-i+1))){

            if((j-i+1)<=maxi && (j-i+1)>=mini){
                count++;

            }
            
        }
        else if( !isvalid(s.substr(i,j-i+1))){
            while(!isvalid(s.substr(i,j-i+1))){
                i++;
                
            }
            if(isvalid(s.substr(i,j-i+1)) && (j-i+1)<=maxi && (j-i+1)>=mini){
                count++;
            }

        }
        j++;
    }
    return count;
}

int main(){

    string a="1011001110";




    return 0;
}