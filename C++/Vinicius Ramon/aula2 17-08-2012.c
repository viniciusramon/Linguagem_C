#include <stdio.h>
main()
{
      float salario,vendas,faltas,desconto,salario2;
      while(1)
      {
              printf("digite seu salario fixo: ");
              scanf("%f",&salario);
              printf("digite seu total de vendas: ");
              scanf("%f",&vendas);
              printf("digite sua quantidade de faltas: ");
              scanf("%f",&faltas);
              desconto=faltas*5;
                                if(vendas<=1500)
                                {
                                salario2=((vendas*0.02)+salario)-desconto;
                                printf("seu pagamento e de: %f\n",salario2);
                                }
                                            else if((1501<=vendas)&&(vendas<=3000))
                                             {
                                              salario2=((vendas*0.03)+salario)-desconto;
                                              printf("seu pagamento e de: %f\n",salario2);
                                              } 
                                                           else if((3001<=vendas)&&(vendas<=6000))
                                                           {
                                                            salario2=((vendas*0.05)+salario)-desconto;
                                                             printf("seu pagamento e de: %f\n",salario2);
                                                             } 
                                                                         else
                                                                         {
                                                                         salario2=((vendas*0.06)+salario)-desconto;
                                                                         printf("seu pagamento e de: %f\n",salario2);
                                                                         } 
      }
}
