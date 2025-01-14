#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1; // Key not found
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key = 500;

    int result = binarySearch(arr, 10, key);

    if(result != -1) {
        cout << "Element present at index: " << result << endl;
    } else {
        cout << "Element not present in array!" << endl;
    }

    return 0;
}



// Time Complexity Analysis
// Binary search works by repeatedly dividing the search interval in half. Here’s the step-by-step breakdown:

// Best Case (O(1)):

// The best-case scenario occurs when the key is found at the middle element on the first comparison. The function will immediately return the index.

// Worst Case (O(log n)):

// In the worst-case scenario, the function will have to divide the array and compare elements log₂(n) times, where n is the number of elements in the array. This is because each comparison cuts the search space in half.

// The function continues halving the search space until it finds the key or exhausts the search space.

// Average Case (O(log n)):

// On average, the time complexity remains O(log n) because it follows the same pattern of halving the search space, regardless of where the key is located.
