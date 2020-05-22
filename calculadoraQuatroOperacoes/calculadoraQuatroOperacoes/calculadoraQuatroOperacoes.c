//Author: Adnan Paiva
//Learning C programming language
//19/05/2020

#include <stdio.h>
#include <stdlib.h>

void calc()
{
    float a, b;
    int ope = 0;
    while (ope < 1 || ope > 4){
        system("clear");
        printf("\n\n-*-*-*-*-*-*-*- Calculadora de quatro operacoes -*-*-*-*-*-*-*-");
        printf("\n\nDigite um dos dois com os quais deseja realizar sua conta: ");
        scanf("%f", &a);
        printf("\n\nAgora digite o outro: ");
        scanf("%f", &b);
        printf("\n\nQue tipo de operacao deseja realizar?");
        printf("\n\n 1 - Soma?");
        printf("\n\n 2 - Subtracao?");
        printf("\n\n 3 - Divisao?");
        printf("\n\n 4 - Multiplicacao?");
        printf("\n\nDigite o numero da operacao que deseja realizar (1-4): ");
        scanf("%d", &ope);
        switch(ope){
            case 1:
                printf("\n\nA soma entre os numeros %.2f e %.2f e %.2f!", a, b, (a + b));
                break;
            case 2:
                printf("\n\nA subtracao entre os numeros %.2f e %.2f e %.2f!", a, b, (a - b));
                break;
            case 3:
                printf("\n\nA divisao entre os numeros %.2f e %.2f e %.2f!", a, b, (a / b));
                break;
            case 4:
                printf("\n\nA multiplicacao entre os numeros %.2f e %.2f e %.2f!", a, b, (a * b));
                break;
            default:
                printf("\nOpcao invalida!!!");
                break;
        }
    }
}

int main(){

    char again = 'Y';
    while (again == 'Y' || again == 'y'){
        calc();
        printf("\n\nVoce deseja realizar outra operacao? (Y/N): ");
        scanf(" %c", &again);
        system("clear");
    }
    printf("\n\nAte mais!!!\n\n");
    return 0;
}
