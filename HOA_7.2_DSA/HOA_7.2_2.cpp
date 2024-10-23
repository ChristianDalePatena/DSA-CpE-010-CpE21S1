#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

const int max_size = 100;  

void shellSort(int dataset[], int size) {
    
    for (int gap = size / 2; gap > 0; gap /= 2) {
      
        for (int i = gap; i < size; i++) {
            int temp = dataset[i];
            int j;
         
            for (j = i; j >= gap && dataset[j - gap] > temp; j -= gap) {
                dataset[j] = dataset[j - gap];
            }
          
            dataset[j] = temp;
        }
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

  
    shellSort(dataset, max_size);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    return 0;
}