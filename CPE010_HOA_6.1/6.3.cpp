// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void bubblesort(int array[], int size) {
    for (int a = 0; a < size - 1; a++) {
        for (int i = 0; i < size - a - 1; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}


int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

       
        if (arr[mid] == x)
            return mid;

        
        if (arr[mid] < x)
            low = mid + 1;

        
        else
            high = mid - 1;
    }

    
    return -1;
}

int main() {
  
    int array[20] = {34, 7, 23, 32, 5, 62, 76, 11, 19, 27,  8, 45, 67, 54, 12, 33, 29, 90, 18, 41};
    
    int size = 20;  

  
    cout << "The Original Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    bubblesort(array, size);

   
    cout << "The Sorted Array in Ascending Order: " << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    int target;
    cout << "Enter a number to search: ";
    cin >> target;

 
    int result = binarySearch(array, 0, size - 1, target);

   
    if (result != -1) {
        cout << "The Number Exist in the Array, which is in the position " << result<<"." << endl;
    } else {
        cout << "The Number does not exist in the array." << endl;
    }

    return 0;
}


