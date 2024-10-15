#include <iostream>
using namespace std;


int recursiveBinarySearch(int arr[], int low, int high, int x) {
    if (low > high) return -1; 
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == x) return mid; 
    if (arr[mid] < x)
        return recursiveBinarySearch(arr, mid + 1, high, x); 
    else
        return recursiveBinarySearch(arr, low, mid - 1, x); 
}

int main() {
    int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int result = recursiveBinarySearch(arr, 0, n - 1, key);
    if (result != -1)
        cout << "The number was found in the array, which has a postion of " << result << endl;
    else
        cout << "The number does not exist in the array " << endl;

    return 0;
}
