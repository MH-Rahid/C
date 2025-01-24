#include <stdio.h>
int main(int argc, char const* argv[])
{
    printf("\n******** Student Grade Management ***********\n");

    double mark;
    char grade;

    printf("\nEnter your mark : ");
    scanf("%lf", &mark);

    if (mark <= 100 && mark >= 90)
        grade = 'A';
    else if (mark < 90 && mark >= 80)
        grade = 'B';
    else if (mark < 80 && mark >= 70)
        grade = 'C';
    else if (mark < 70 && mark >= 60)
        grade = 'D';
    else if (mark < 60 && mark >= 0)
        grade = 'F';
    else
        printf("\nInvalid, please enter the mark (1-100)");

    printf("\nGrade : %c", grade);

    return 0;
}
