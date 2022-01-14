#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main()
{
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf%lf%lf",&A,&B,&C);

    TRIANGULO=(0.5)*A*C;
        CIRCULO=PI*pow(C,2);
            TRAPEZIO=(float)((A+B)/2)*C;
                QUADRADO=pow(B,2);
                    RETANGULO=A*B;


printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);

    return 0;
}

