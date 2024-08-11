 #include <stdio.h>

int (int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }
    int j = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[size - 1];
    return j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    size = removeDuplicates(arr, size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
[8:02 pm, 11/8/2024] Dinesh: #include <stdio.h>

void findFrequency(int arr[], int size) {
    int freq[100] = {0}; // Assuming maximum value is 99
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 100; i++) {
        if (freq[i] != 0) {
            printf("Element %d: %d times\n", i, freq[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
