#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <math.h>

int main()
{
    float a, b;
    char c ;
    char op ;
    while   (  c !=     'q'){
    printf("\nSaisir le premier nombre :\n");
    scanf("%f",&a);
    printf("Saisir le deuxieme nombre :\n ");
    scanf("%f",&b);
    printf("Saisir un operateur:\n ");
    scanf("%s",&op);

    switch (op){
        case '+' :
                 printf("la somme est : %f\n",a+b);
                 break  ;
        case '-' :  printf("la soustraction est : %f\n",a-b);
                   break  ;
        case '*' :  printf("le produit est : %f\n",a*b);
                 break  ;
        case '/' :  if(b != 0){
                       printf("la division est : %f\n",a/b);
                    } else
                       printf("erreur");
                  break  ;
        default :   printf("Erreur ");
               break  ;


    }
    printf  ( " voulez vous terminez si oui tapez une lettre different de q");
    scanf   ("%s",&c)   ;

    }


    return 0;
}
