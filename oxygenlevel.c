// Program to implement Oxygen Level Problem.
#include <stdio.h>
#include <conio.h>

int main()
{
    int level[3][3];
    int avg[3], i, j, flag = 1;

    for (i = 0; i < 3; i++)
    {
        printf("Trainee %d\n", i + 1);
        avg[i] = 0;
        for (j = 0; j < 3; j++)
        {
            printf("Enter oxygen level for round %d: ", j + 1);
            scanf("%d", &level[i][j]);
            if (level[i][j] < 0 && level[i][j] > 100)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        j = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                avg[i] = avg[i] + level[i][j];
            }
            avg[i] = avg[i] / 3;
        }

        for (i = 0; i < 3; i++)
        {
            if (avg[i] >= 70)
            {
                printf("Trainee number: %d\n", i);
            }
            else
            {
                printf("All players unfit");
            }
        }
    }
    else
    {
        printf("INVALID INPUT");
    }

    return 0;
}