#include <stdio.h>
main()
{
float nota,media,cont,soma=0; 

while(1)
{
        soma=0;
        
for(cont=0;cont<3;cont++)
{
                         printf("digite a nota do aluno: ");
                         scanf("%f",&nota);
                         
                         soma=soma+nota;
                         }
                         
                         media=soma/cont;
                         
                         printf("\na media das notas e %.2f\n\n",media);
                         }
                         }
