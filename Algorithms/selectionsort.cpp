#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>& arr){
    for(int i=0; i<arr.size()-1; i++){
        int minIndex=i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            
        }
        swap(arr[minIndex],arr[i]);

    }
}

int main(){
    vector<int> arr={5,0,10,15,75};

    selectionsort(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}