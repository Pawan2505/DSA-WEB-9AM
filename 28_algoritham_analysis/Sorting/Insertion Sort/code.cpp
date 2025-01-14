#include<iostream>
using namespace std;

int insertionSort(int arr[], int n){

    for(int i = 0; i < n; i++){

        int current = i;
        int previous = i-1;

        while(previous>= 0 && arr[previous] > arr[current]){

            arr[previous + 1] = arr[previous];

            previous--;
        }
    }
}

int main(){

    int n = 6;
    int arr[n] = {12,34,6,78,89,90};

    insertionSort(arr,n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}