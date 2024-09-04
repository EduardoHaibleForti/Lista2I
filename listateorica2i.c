#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float coeficienteA;
    float coeficienteB;
    float coeficienteC;
    float delta;
    float valorX1;
    float valorX2;

    printf("Digite um valor para o coeficiente A :");
    scanf("%f",&coeficienteA);

    printf("Digite um valor para o coeficiente B :");
    scanf("%f",&coeficienteB);

    printf("Digite um valor para o coeficiente C :");
    scanf("%f",&coeficienteC);

    delta=coeficienteB*coeficienteB -4*coeficienteA*coeficienteC;

    valorX1= (-coeficienteB+sqrt(delta))/(2*coeficienteA);

    valorX2= (-coeficienteB-sqrt(delta))/(2*coeficienteA);

    printf("O valor de x1 : %f\n",valorX1);
    printf("O valor de x2 : %f\n",valorX2);

    if(delta<0){
        printf("A equacao nao possui raizes reais");
    }

    return 0;

}

