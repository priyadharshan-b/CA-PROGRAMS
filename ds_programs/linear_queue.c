#include <stdio.h>
#include <stdlib.h>

#define N 10

int QUEUE[N], FRONT = 0, REAR = -1, ITEM;

void Qinsert() {
    if (REAR == N - 1) {
        printf("Queue Overflow\n");
    } else {
        printf("\n enter an item : ");
        scanf("%d", &ITEM);
        REAR++;
        QUEUE[REAR] = ITEM;
    }
}

void Qdelete() {
    if (REAR == FRONT - 1) {
        printf(" \n Queue Underflow\n");
    } else if (FRONT == REAR) {
        printf("\n this is the last element in queue \n ");
        printf("\n Deleted: %d\n", QUEUE[FRONT]);
        FRONT = 0;
        REAR = -1;
    } else {
        printf("\n deleted item is %d \n", QUEUE[FRONT]);
        FRONT++;
    }
}

void Qdisplay() {
    if (REAR == FRONT - 1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue: ");
        for (int i = FRONT; i <= REAR; i++)
            printf("%d ", QUEUE[i]);
        printf(" front : %d \n", QUEUE[FRONT]);
        printf(" rear : %d \n", QUEUE[REAR]);
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n Queue implementation using array");
        printf("\n***********************************");
        printf("\n 1. Insert into QUEUE ");
        printf("\n 2. Delete from Queue ");
        printf("\n 3. Display Queue ");
        printf("\n 4. Exit");
        printf("\n Enter your choice ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                Qinsert();
                Qdisplay();
                break;
            case 2:
                Qdelete();
                Qdisplay();
                break;
            case 3:
                Qdisplay();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}
