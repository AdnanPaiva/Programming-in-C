//Author: Adnan Paiva
//Date: 05/25/2020
//Program: Used to create a matrix and change its order

#include <stdio.h>
#include <stdlib.h>

void invertedMatrix(){

    int i, j, a, b;
    printf("\n\n-*-*-*-*-*-*-*-*-*- Inverted Matrix -*-*-*-*-*-*-*-*-*-");
    printf("\n\nPlease, inform the size of the matrix (i, j): ");
    scanf("%d %d", &a, &b);
    float matrix[a][b];
    for (i = 0; i < a; i++){
        for (j = 0; j < b; j++){
            printf("\n\nPlease, inform the number for position (%d, %d): ", i+1, j+1);
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("\n\nThis is your Matrix!\n\n");
    for (i = 0; i < a; i++){
        for (j = 0; j < b; j++){
            printf("\t%0.2f", (matrix[i][j]));
        }
        printf("\n");
    }
    printf("\n\nThis is the inverted Matrix!\n\n");
    for (i = a-1; i >= 0; i--){
        for (j = b-1; j >= 0; j--){
            printf("\t%0.2f", (matrix[i][j]));
        }
        printf("\n");
    }
}

int main()
{
    invertedMatrix();
    return 0;
}
