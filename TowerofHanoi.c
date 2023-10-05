#include <stdio.h>

// Function to solve Tower of Hanoi puzzle
void towerOfHanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", source, target);
        return;
    }

    // Move n-1 disks from source to auxiliary peg using target as an auxiliary peg
    towerOfHanoi(n - 1, source, target, auxiliary);

    // Move the nth disk from source to target peg
    printf("Move disk %d from peg %c to peg %c\n", n, source, target);

    // Move the n-1 disks from auxiliary peg to target peg using source as an auxiliary peg
    towerOfHanoi(n - 1, auxiliary, source, target);
}

int main() {
    int num_disks;
    printf("Enter the number of disks: ");
    scanf("%d", &num_disks);

    towerOfHanoi(num_disks, 'A', 'B', 'C');

    return 0;
}
