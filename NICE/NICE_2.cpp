#include<bits/stdc++.h>
using namespace std;

int digitSum(int n, int k){
    string s= to_string(n);
    int sum=0;
    for(int i=0; i<s.length(); i +=k){
        if(i+k <= s.length()){
            int a=stoi(s.substr(i,k));
            sum += a;
        }
        else{
            int b= stoi(s.substr(i,s.length()-i));
            sum += b;
        }
        
    }
    
    return sum;
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    int result = digitSum(n,k);
    cout<<"Answer is : "<<result;
}