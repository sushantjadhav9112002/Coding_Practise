#include<bits/stdc++.h>
using namespace std;

int findOne(int arr[], int n){
    int totalone = 0;
    int currentgain = 0;
    int maxgain = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            totalone += 1;
            currentgain--;
        }
        else{
            currentgain++;
        }
        if(currentgain<0){
            currentgain=0;
        }
        maxgain= max(currentgain, maxgain);
    }
    return (maxgain+totalone);
}


int main(){
    int arr[]={1,0,0,1,1,0,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int a= findOne(arr,n);
    cout<<"answer is "<<a;
}