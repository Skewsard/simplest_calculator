#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Entrer 1er nombre: ");
    scanf("%lf", &num1);

    printf("Entrer le symbole de l'operation souhaitee: ");
    scanf(" %c", &op);

    printf("Entrer 2nd nombre: ");
    scanf("%lf", &num2);

    if(op == '+'){printf("%f", num1 + num2);}
    else if(op == '-'){printf("%f", num1 - num2);}
    else if(op == '*'){printf("%f", num1 * num2);}
    else if(op == '/'){printf("%f", num1 / num2);}
    else {printf("Operation invalide");}
    printf("\n");
    system("pause");
    return 0;
}
