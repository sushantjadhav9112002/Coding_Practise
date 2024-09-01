#include<bits/stdc++.h>
using namespace std;

void maxsub(int arr[], int n){
    int sum =0, maxi=arr[0], start=0, end=0, tempstart=0;

    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum>maxi){
            maxi=sum;
            start = tempstart;
            end=i;
        }
        if(sum<0){
            sum=0;
            tempstart=i+1;
        }
    }

    cout<<"Subarray is : ";
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Maximum sum is : "<<maxi;
}

int main(){

    int arr[]={1,2,3,-3,-2};
    int n= sizeof(arr)/sizeof(arr[0]);
    maxsub(arr,n);

    return 0;
}