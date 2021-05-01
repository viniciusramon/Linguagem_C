#include <stdio.h>
main()
{
      float salario,vendas,salario2;
      while(1)
      {
              printf("digite seu salario fixo: ");
              scanf("%f",&salario);
              printf("digite seu total de vendas: ");
              scanf("%f",&vendas);
                                if(vendas<=1500)
                                {
                                salario2=((vendas*0.03)+salario);
                                printf("seu salario total e de: %.2f\n",salario2);
                                }
                                else
                                {
                                salario2=((vendas*0.05)+salario);
                                printf("seu salario total e de: %.2f\n",salario2);
                                } 
      }
}
