#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr){
    for(int i=1; i<arr.size(); i++){
        bool swapped=false;
        for(int j=0; j<arr.size()-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }

        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    vector<int> arr={5,2,4,1,0,8};
    bubblesort(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}