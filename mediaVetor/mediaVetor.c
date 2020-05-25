//Author: Adnan Paiva
//Date: 05/24/2020
//Algorithm to calculate the average of the vector

#include <stdio.h>
#include <stdlib.h>

void vectAvarega()
{
    int qtd, i;
    float sum = 0;
    printf("\n\n\n-*-*-*-*-*-*-*-*-*-*- Vector Average Program -*-*-*-*-*-*-*-*-*-*-");
    printf("\n\n\nWhich is the size of your vector? ");
    scanf("%d", &qtd);
    float vec[qtd];
    for (i = 0; i < qtd; i++){
        printf("\n\nType the %d value to be stored in your vector: ", i+1);
        scanf("%f", &vec[i]);
        //printf("\n%d\n", vec[i]);
        sum = sum + vec[i];
        //printf("\n%0.2f", sum);
    }
    printf("\n\n\nThe sum of the vector values is %0.2f and its average is %0.2f!\n\n\n", sum, sum/qtd);
}

int main()
{
    vectAvarega();
    return 0;
}
