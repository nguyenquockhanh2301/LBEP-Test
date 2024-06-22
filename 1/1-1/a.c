#include <stdio.h>

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int i;

    for (i = 0; i < 6; i++) {
        printf("The element %d of the array is %c.\n", i + 1, Array[i]);
    }

    return 0;
}