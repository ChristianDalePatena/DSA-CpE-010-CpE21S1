#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

const int max_size = 100; 


void merge(int dataset[], int left, int mid, int right) {
    int n1 = mid - left + 1;  
    int n2 = right - mid;     
   
    int leftArray[n1], rightArray[n2];

   
    for (int i = 0; i < n1; i++)
        leftArray[i] = dataset[left + i];
    for (int i = 0; i < n2; i++)
        rightArray[i] = dataset[mid + 1 + i];

   
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            dataset[k] = leftArray[i];
            i++;
        } else {
            dataset[k] = rightArray[j];
            j++;
        }
        k++;
    }

  
    while (i < n1) {
        dataset[k] = leftArray[i];
        i++;
        k++;
    }

   
    while (j < n2) {
        dataset[k] = rightArray[j];
        j++;
        k++;
    }
}


void mergeSort(int dataset[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

      
        mergeSort(dataset, left, mid);
        mergeSort(dataset, mid + 1, right);

    
        merge(dataset, left, mid, right);
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

    
    mergeSort(dataset, 0, max_size - 1);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < max_size; i++) {
        cout << dataset[i] << " ";
    }
    cout << endl;

    return 0;
}
