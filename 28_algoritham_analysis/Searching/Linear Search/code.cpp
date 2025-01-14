#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
           
           return i;
        }
    }

    return -1;

}

int main(){

    int arr[10] = {10,20,30,40,50,60,70,80,90,100};

    int key = 500;

  int result = linearSearch(arr,10,key);

  if(result != -1){
    cout<<"Element present in array at index : "<<result<<endl;
  }else{
    cout<<"Element not present in array!"<<endl;
  }
}



// Time Complexity Analysis:
// Best Case (O(1)):

// The best case occurs when the key is found in the first element of the array. The function will return immediately after the first comparison.

// Worst Case (O(n)):

// The worst case happens when the key is not present in the array or is the last element. The function will have to check every element in the array, resulting in n comparisons, where n is the size of the array.

// Average Case (O(n)):

// On average, the key could be found somewhere in the middle of the array. However, the average case time complexity for a linear search is still considered O(n) because it scales linearly with the size of the input array.