#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivot=arr[low];
    int count=0;

    for(int i=low; i<=high; i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    swap(arr[low+count],arr[low]);
    

    int pivotindex=low+count;

    int i=low, j=high;

    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}


void quicksort(vector<int>&arr, int low, int high){
    if(low>high){
        return;
    }
    int pi=partition(arr,low,high);

    quicksort(arr,low, pi-1);
    quicksort(arr,pi+1,high);
}
int main(){
    vector<int> arr={5,7,2,1,0};
    quicksort(arr,0,4);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}