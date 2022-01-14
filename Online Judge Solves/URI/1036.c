#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,R1,R2;
    scanf("%f %f %f",&A,&B,&C);
    if(A!=0 && (pow(B,2)-4*A*C)>=0 )
    {

        R1= (-B+(sqrt(pow(B,2)-4*A*C)))/(2*A);
        R2 =(-B-(sqrt(pow(B,2)-4*A*C)))/(2*A);
        printf("R1 = %0.5f\nR2 = %0.5f\n",R1,R2);
    }
    else  printf("Impossivel calcular\n");

   return 0;
}
