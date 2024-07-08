#include <stdio.h>

void square(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int size, i;
    
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    square(arr, size);
    
    printf("Squared array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}
