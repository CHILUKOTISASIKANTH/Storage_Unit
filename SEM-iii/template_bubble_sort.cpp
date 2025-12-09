#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int intArr[] = {5, 3, 8, 4, 2};
    float floatArr[] = {4.2, 2.5, 3.3, 1.8};

    cout << "Original Integer Array: ";
    display(intArr, 5);
    bubbleSort(intArr, 5);
    cout << "Sorted Integer Array: ";
    display(intArr, 5);

    cout << "\nOriginal Float Array: ";
    display(floatArr, 4);
    bubbleSort(floatArr, 4);
    cout << "Sorted Float Array: ";
    display(floatArr, 4);

    return 0;
}

