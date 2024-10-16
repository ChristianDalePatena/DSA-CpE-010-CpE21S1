#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


template <typename T>
void selectionSort(T arr[], int arr_size){
    for (int i = 0; i < arr_size  ; i++){
        int min_index = i;
        for(int j = i +1; j < arr_size; j++){
            if(arr[j]< arr[min_index]){
                min_index = j;
                
                 T temp = arr[i];
                arr[i] = arr[min_index];
                arr[min_index] = temp;
            }
        }
    }
}

template <typename T>
int Routine_smallest(T A[], int arr_size){
    int position = 0;
    for(int j = 1 ; j < arr_size; j++){
        if(A[j]< A [position]){
            position = j;
        }
    }
    return position;
}


int main() {
    const int max_size = 100;
    int number[max_size];

    srand(time(0));
    for (int i = 0; i < max_size; i++) {
        number[i] = rand() % 100;
    }

    cout << "Unsorted Array: " << endl;
    for (int j = 0; j < max_size; j++) {
        cout << number[j] << " ";
    }
    cout << endl;

    selectionSort(number, max_size);

    cout << "Sorted Array With the Use of Selection Sort: " << endl;
    for (int j = 0; j < max_size; j++) {
        cout << number[j] << " ";
    }
    cout << endl;

    return 0;
}