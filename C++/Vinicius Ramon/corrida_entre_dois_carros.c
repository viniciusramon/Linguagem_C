#include <stdio.h>
main()
{
float tempo1, tempo2, distancia1, distancia2, vm1, vm2;
while(1)
{
        printf("digite a distancia do primeiro carro: ");
        scanf("%f",&distancia1);
        printf("digite a distancia do segundo carro: ");
        scanf("%f",&distancia2);
        printf("digite o tempo do primeiro carro: ");
        scanf("%f",&tempo1);
        printf("digite o tempo do segundo carro: ");
        scanf("%f",&tempo2);
        vm1=distancia1/tempo1;
        vm2=distancia2/tempo2;
        if(vm1>vm2)
        {
                   printf("o primeiro carro e o vencedor e a sua velocidade media e:\n %.2f ",vm1);
                   }
                   else
                   {
                       printf("o segundo carro e o vencedor e a sua velocidade media e:\n %.2f ",vm2);
                       }
                       }
                       }
