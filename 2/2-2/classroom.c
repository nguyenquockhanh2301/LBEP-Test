#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char roomName[50];
    int roomNumber;
};

int main() {
    struct ClassRoom ClassRooms[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter information for Classroom %d:\n", i + 1);

        printf("Room Name: ");
        fgets(ClassRooms[i].roomName, sizeof(ClassRooms[i].roomName), stdin);
        ClassRooms[i].roomName[strcspn(ClassRooms[i].roomName, "\n")] = '\0';

        printf("Room Number: ");
        scanf("%d", &ClassRooms[i].roomNumber);

        while (getchar() != '\n');

        printf("\n");
    }

    printf("Classroom Information:\n");
    for (i = 0; i < 10; i++) {
        printf("Classroom %d:\n", i + 1);
        printf("Room Name: %s\n", ClassRooms[i].roomName);
        printf("Room Number: %d\n\n", ClassRooms[i].roomNumber);
    }

    return 0;
}