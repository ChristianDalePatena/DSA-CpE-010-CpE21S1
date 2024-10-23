// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

const int max_size = 100;  


void bubbleSort(int dataset[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (dataset[j] > dataset[j + 1]) {
            
                int temp = dataset[j];
                dataset[j] = dataset[j + 1];
                dataset[j + 1] = temp;
            }
        }
    }
}

int main() {S
    int dataset[max_size];

   
    srand(time(0));

   
    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand() % 100 + 1;  
    }

    cout << "Unsorted Array: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    // Sorting the array
    bubbleSort(dataset, max_size);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    return 0;
}
