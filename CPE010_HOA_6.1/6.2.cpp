#include <iostream>
#include <cstdlib> // for generating random integers
#include <time.h>  // will be used for our seeding function
using namespace std;

const int max_size = 50; 

// Linear Search function
int linearSearch(int dataset[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (dataset[i] == target) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    srand(time(0)); 

    int dataset[max_size];  

   
    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand() % 100; 
    }

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
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the dataset." << endl;
    }

    return 0;
}