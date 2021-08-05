#include <stdio.h>
#include <conio.h>

int main()
{
    int icost = 18, ecost = 12, ninterior, nexterior, i, costi = 0, coste = 0;
    printf("Cost of painting interior walls: Rs %d per sq feet\n", icost);
    printf("Cost of painting exterior walls: Rs %d per sq feet\n", ecost);

    printf("Enter number of interior walls: ");
    scanf("%d", &ninterior);
    printf("Enter number of exterior walls: ");
    scanf("%d", &nexterior);

    double isurface[ninterior], esurface[nexterior];

    for (i = 0; i < ninterior; i++)
    {
        printf("Enter surface area of interior wall(in sq feet) %d: ", i + 1);
        scanf("%lf", &isurface[i]);
        costi = costi + isurface[i];
    }
    costi *= 18;

    for (i = 0; i < nexterior; i++)
    {
        printf("Enter surface area of exterior wall(in sq feet) %d: ", i + 1);
        scanf("%lf", &esurface[i]);
        coste = coste + esurface[i];
    }
    coste *= 12;

    printf("Total cost of painting house: Rs %d", costi + coste);

    return 0;
}