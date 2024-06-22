#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char roomName[50];
    int roomNumber;
};

int main() {
    struct ClassRoom room1;

    printf("Enter the room name: ");
    fgets(room1.roomName, sizeof(room1.roomName), stdin);
    room1.roomName[strcspn(room1.roomName, "\n")] = '\0';

    printf("Enter the room number: ");
    scanf("%d", &room1.roomNumber);

    printf("\nClassroom Information:\n");
    printf("Room Name: %s\n", room1.roomName);
    printf("Room Number: %d\n", room1.roomNumber);

    return 0;
}