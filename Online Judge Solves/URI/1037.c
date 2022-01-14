#include<stdio.h>
int main()
{
    float t;
    scanf("%f",&t);
    if(t>=0 && t<=25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(t>25 && t<= 50)
    {
        printf("Intervalo (25,50]\n");
    }
     else if(t>50 && t<= 75)
    {
        printf("Intervalo (50,75]\n");
    }
     else if(t>75 && t<= 100)
    {
        printf("Intervalo (75,100]\n");
    }
    else printf("Fora de intervalo\n");

    return 0;
}
