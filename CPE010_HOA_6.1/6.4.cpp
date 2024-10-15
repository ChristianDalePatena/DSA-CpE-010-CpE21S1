// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

const int max_size = 50; 


int linearSearch(int dataset[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (dataset[i] == target) {
            return i;  
        }
    }
    return -1; 
}

int main() {

   
    int dataset[max_size] = {23, 45, 12, 78, 56, 89, 34, 90, 67, 1, 22, 33, 55, 77, 11, 99, 5, 8, 3, 47, 18, 21, 30, 25, 65, 71, 19, 62, 29, 31, 13, 53, 24, 64, 72, 2, 40, 28, 82, 50,  27, 44, 10, 74, 81, 36, 42, 15, 66, 9};

    cout << "Dataset: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    int target;
    cout << "Enter the value to search for: ";
    cin >> target;

   
    int result = linearSearch(dataset, max_size, target);

  
    if (result != -1) {
        cout << "The number exist in the array, which can be found at the position " << result<<"."<< endl;
    } else {
        cout << "The Number Does not Exist Within the Array." << endl;
    }

    return 0;
}
