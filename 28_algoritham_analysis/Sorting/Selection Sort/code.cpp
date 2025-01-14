#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        int smallest = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }

        swap(arr[i], arr[smallest]);
    }
}

int main(){
    int n = 6;
    int arr[n] = {12,54,6,76,7,53};

    selectionSort(arr,n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}