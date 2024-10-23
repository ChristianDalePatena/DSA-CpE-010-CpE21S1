#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

const int max_size = 100;  


int partitions(int dataset[], int low, int high) {
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
        
        int pi = partitions(dataset, low, high);

       
        quickSort(dataset, low, pi - 1);  
        quickSort(dataset, pi + 1, high); 
    }
}

int main() {
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

   
    quickSort(dataset, 0, max_size - 1);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    return 0;
}

