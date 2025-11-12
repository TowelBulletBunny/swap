
#include <stdlib.h>
#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(int argc, const char * argv[]) {
    int v1 = 10;
    int v2 = 20;

    printf("Values before Swapping:\n");
    printf("V1 = %d\n", v1);
    printf("V2 = %d\n", v2);

    // Call the swap function using pass by reference
    swap(&v1, &v2);

    printf("Values after Swapping:\n");
    printf("V1 = %d\n", v1);
    printf("V2 = %d\n", v2);

    return 0;
}
