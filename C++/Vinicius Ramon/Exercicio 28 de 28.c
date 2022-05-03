#include <stdio.h>
main()
{
 float salario,tsalario=0,msalario,maior,porc;
 int filhos,tfilhos=0,mfilhos,cont=0,tpessoas=0;
     printf("digite o salario:");
     scanf("%f",&salario);
     maior=salario;
      while(salario>=0)
      {
      printf("digite o numero de filhos:");
      scanf("%d",&filhos);
      tsalario=tsalario+salario;
      tfilhos=tfilhos+filhos;
      cont++;
      if(salario>maior)
      {
                       maior=salario;
                       }
                       if(salario<150)
                       {
                                      tpessoas++;
                                      }
      printf("digite o salario:");//quando a parada de uma repetição está atrelada à entrada de dados do usuario
      scanf("%f",&salario);
      }
      msalario=tsalario/cont;
      mfilhos=tfilhos/cont;
      porc=(tpessoas*100)/cont;
       printf("\n\nHabitantes: %d\n\n",cont);
       printf("O media de  salario e: %.2f\n\n",msalario);
       printf("O media de  filhos e: %d\n\n",mfilhos);
       printf("O maior salario e: %.2f\n\n",maior);
       printf("A porcentagem de pessoas com o salario menor que R$150.00 e de : %.2f\n\n",porc);
       while(1);
       }
