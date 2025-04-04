#include<iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;

    for(int i = start + 1; i <= end; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
    if(start >= end) {
        return;
    }

    int pivotIndex = partition(arr, start, end);

    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main() {
    int n = 7;
    int arr[7] = {15, 6, 35, 23, 50, 17, 80};

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
