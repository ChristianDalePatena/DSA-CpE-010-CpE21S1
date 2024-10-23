#include <iostream>
using namespace std;

const int max_size = 15; 


void insertionSort(int dataset[], int size) {
    for (int i = 1; i < size; i++) {
        int key = dataset[i];
        int j = i - 1;
        
        while (j >= 0 && dataset[j] > key) {
            dataset[j + 1] = dataset[j];
            j--;
        }
        dataset[j + 1] = key;
    }
}


void selectionSort(int dataset[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (dataset[j] < dataset[minIndex]) {
                minIndex = j;
            }
        }
        swap(dataset[i], dataset[minIndex]);
    }
}


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

      
        insertionSort(dataset + low, pi - low); 

      
        selectionSort(dataset + pi + 1, high - pi);
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