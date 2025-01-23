#include <stdio.h>

void towerHanoi(int diskNum, char beg, char aux, char end);

int main(int argc, char const* argv[])
{
    int diskNum;

    printf("Enter the number of disks: ");
    scanf("%d", &diskNum);
    printf("\nThe sequences of moves to solve the tower of hanoi of %d disks \n\n", diskNum);
    towerHanoi(diskNum, 'A', 'B', 'C');
    return 0;
}



void towerHanoi(int diskNum, char beg, char aux, char end) {

    if (diskNum <= 0)
        printf("\nInvalid disk number!\n");
    else if (diskNum == 1)
        printf("Moves disk from %c to %c \n", beg, end);
    else
    {
        towerHanoi(diskNum - 1, beg, end, aux);
        towerHanoi(1, beg, aux, end);
        towerHanoi(diskNum - 1, aux, beg, end);
    }


}