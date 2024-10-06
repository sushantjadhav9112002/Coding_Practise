#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int>& a){
    int n=a.size();

    for(int i=1; i<n; i++){
        int j=i-1;
        int key=a[i];

        for(; j>=0; j--){
            if(a[j]>a[j+1]){
                a[j+1]=a[j];
            }
            else{
                break;
            }
            a[j]=key;
        }
    }
}

int main(){

    vector<int> a={1,0,-2,-1};
    insertionsort(a);

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}