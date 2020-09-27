#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <SDL.h>

int main(int argc, char *argv[])
{
    printf("Calculateur de Racine\n");
    system("pause>nul");
    system("cls");
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float discriminant;
    int compx1;
    for(int i=0;i<1;i+=0)
    {
        printf("A : ");
        scanf("%f", &a);
        printf("B : ");
        scanf("%f", &b);
        printf("C: ");
        scanf("%f", &c);
        discriminant=pow(b,2)-4*a*c;
        printf("\nResultat :\nLe discriminant est %f\n", discriminant);
        if(discriminant>0)
        {
            x1=((-b)-sqrt(discriminant))/(2*a);
            x2=((-b)+sqrt(discriminant))/(2*a);
            compx1=(x1>x2)?1:0;
            if(compx1==1)
            {
                printf("X1 = %f\nX2 = %f\n", x1,x2);
            }
            else if(compx1==0)
            {
                printf("X1 = %f\nX2 = %f\n", x2,x1);
            }
        }
        else if(discriminant==0)
        {
            x1=(-b)/(2*a);
            printf("X1 = %f", x1);
        }
        else if(discriminant<0)
        {
            printf("Pas de racine pour le polynome");
        }
        system("pause>nul");
        system("cls");
    }
    return 0;
}
