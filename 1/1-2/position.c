#include <stdio.h>

int findPosition(char Array[], int size, char target) {
    int position = -1;
    int i;

    for (i = 0; i < size; i++) {
        if (Array[i] == target) {
            position = i + 1; 
            break;
        }
    }

    return position;
}

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    char target = 'p';
    
    int position = findPosition(Array, 6, target);

    if (position != -1) {
        printf("The position of '%c' in the array is %d.\n", target, position);
    } else {
        printf("'%c' is not found in the array.\n", target);
    }

    return 0;
}