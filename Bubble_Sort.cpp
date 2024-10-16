// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int arr_size) {
    for (int i = 0; i < arr_size - 1; i++) {
        for (int j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            };
        };
    };
};

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

    bubbleSort(number, max_size);

    cout << "Sorted Array: " << endl;
    for (int j = 0; j < max_size; j++) {
        cout << number[j] << " ";
    }
    cout << endl;

    return 0;
}