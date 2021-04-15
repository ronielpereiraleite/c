#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,dias,total, total2, porce;

    salario = 20;

    printf ("\n quantos dias foi trabalhado \n");
    scanf("\n %f", &dias);

    total = dias * salario;

    printf ("total em dias trabalhados e: R$%.2f \n\n" , total);

    porce =   0.08 * total ;

    total2 = total - porce;

    printf ("\ o total a reseber com desconto e: ( R$ %.2f )  \n\n" , total2);



    system("pause");
    return 0;
}
