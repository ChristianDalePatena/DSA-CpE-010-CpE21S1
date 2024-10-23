#include <iostream>
using namespace std;

const int max_size = 15;  


int partition(int dataset[], int low, int high) {
    int pivot = dataset[high]; 
    int i = low - 1;            

    for (int j = low; j < high; j++) {
        
        if (dataset[j] <= pivot) {
            i++;  
            swap(dataset[i], dataset[j]);  
        }
    }
    swap(dataset[i + 1], dataset[high]);  
    return i + 1;  
}


void quickSort(int dataset[], int low, int high) {
    if (low < high) {
       
        int pi = partition(dataset, low, high);

        
        quickSort(dataset, low, pi - 1);  
        quickSort(dataset, pi + 1, high); 
    }
}

int main() {
   
    int dataset[max_size] = {4, 34, 29, 48, 53, 87, 12, 30, 44, 25, 93, 67, 43, 19, 74};

    cout << "Unsorted Array: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    
    quickSort(dataset, 0, max_size - 1);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    return 0;
}