#include <stdio.h>

struct ClassRoom {
    char name[50];
    int number;
};

void display_classrooms(struct ClassRoom classrooms[], int numRooms) {
    for (int i = 0; i < numRooms; ++i) {
        printf("Room name: %s\n", classrooms[i].name);
        printf("Room no: %d\n\n", classrooms[i].number);
    }
}

int main() {
    struct ClassRoom ClassRooms[] = {
        {"Windows", 1},
        {"Room 2", 2},
        {"Room 3", 3},
        {"Room 4", 4},
        {"Room 5", 5},
        {"Room 6", 6},
        {"Room 7", 7},
        {"Room 8", 8},
        {"Room 9", 9},
        {"Java", 10},
    };
    int numRooms = sizeof(ClassRooms) / sizeof(ClassRooms[0]);
    
    display_classrooms(ClassRooms, numRooms);
    
    return 0;
}