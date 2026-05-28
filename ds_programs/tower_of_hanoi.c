#include <stdio.h>

void toh(int, char, char, char);
int count = 0;

main() {
    char source = 'S', temp = 'T', dest = 'D';
    int n;
    printf("Enter the number of disks: \n");
    scanf("%d", &n);
    printf("Sequence is : \n");
    toh(n, source, temp, dest);
    printf("The Number of Moves : %d", count);
}

void toh(int n, char source, char temp, char dest) {
    if (n > 0) {
        toh(n - 1, source, dest, temp);
        printf("Move Disk %d %c->%c \n", n, source, dest);
        count++;
        toh(n - 1, temp, source, dest);
    }
}
