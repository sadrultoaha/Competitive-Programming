#include<stdio.h>
int main()
{
    int A,B,C,D,sumAB,sumCD;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    sumAB=A+B;
    sumCD=C+D;
    if(A<D && C<B && sumAB<sumCD && C>0 && D>0 && A%2==0)
    {
        printf("Valores aceitos\n");
    }
    else printf("Valores nao aceitos\n");

    return 0;
}
