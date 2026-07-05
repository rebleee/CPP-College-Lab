#include <iostream>
template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int nums[] = {5, 2, 8, 1, 3};
    int size = 5;

    bubbleSort(nums, size);

    for (int i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
    
    return 0;
}