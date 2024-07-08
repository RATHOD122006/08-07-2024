#include <stdio.h>

void square(int *arr, int size) {
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        *ptr = (*ptr) * (*ptr);
        ptr++;
    }
}

int main() {
    int size, i;
    
    
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int arr[size];
    
   
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    
    square(arr, size);
  
    printf("Reversed array elements:\n");
    for (i = size - 1; i >= 0; i--) {
        printf("%d", *(arr + i));
        if (i != 0) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
