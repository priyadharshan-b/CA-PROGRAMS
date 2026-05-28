#include <stdio.h>
#include <stdlib.h>

#define N 10

int QUEUE[N], FRONT = -1, REAR = -1, ITEM;

void CQinsert() {
    if ((FRONT == (REAR + 1) % N)) {
        printf("\nQueue Overflow");
    } else {
        printf("\nEnter the Element to be Inserted: ");
        scanf("\n %d", &ITEM);
        if (FRONT == -1)
            FRONT = REAR = 0;
        else
            REAR = (REAR + 1) % N;
        QUEUE[REAR] = ITEM;
    }
}

void CQdelete() {
    if (FRONT == -1) {
        printf("\nQueue Underflow");
    } else {
        ITEM = QUEUE[FRONT];
        printf("\nThe Deleted Item is : %d", QUEUE[FRONT]);
        if (FRONT == REAR)
            FRONT = REAR = -1;
        else
            FRONT = (FRONT + 1) % N;
    }
}

void CQdisplay() {
    int i;
    if (FRONT == -1) {
        printf("\nNo elements in the CQueue");
    } else {
        printf("\nCircular Queue : ");
        if (FRONT <= REAR) {
            for (i = FRONT; i <= REAR; i++)
                printf("\t%d", QUEUE[i]);
        } else {
            for (i = FRONT; i <= N - 1; i++)
                printf("\t%d", QUEUE[i]);
            for (i = 0; i <= REAR; i++)
                printf("\t%d", QUEUE[i]);
        }
        printf("\nFront Element of the CQueue is : %d", QUEUE[FRONT]);
        printf("\nRear Element of the CQueue is : %d", QUEUE[REAR]);
    }
}

void main() {
    int ch;
    while (1) {
        printf("\nCircular Queue implementation using Array");
        printf("\n*****************************************");
        printf("\n1. Circular Queue Insert ");
        printf("\n2. Circular Queue Delete ");
        printf("\n3. Circular Queue Display ");
        printf("\n4. Exit ");
        printf("\nEnter your Choice : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: CQinsert(); CQdisplay(); break;
            case 2: CQdelete(); CQdisplay(); break;
            case 3: CQdisplay(); break;
            case 4: exit(0);
        }
    }
}
