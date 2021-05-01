#include <stdio.h>

main()
{
      
int idade,maioridade,menoridade,cont=0,feminino=0;

float salario,salariototal=0,mediasalario;

char sexo[16];

    printf("digite a idade: ");
    scanf("%d",&idade);
    
    maioridade=idade;
    
    menoridade=idade;
    
    while(idade>0)
    { 
                  
    printf("digite o sexo se e m (para masculino) ou f (para feminino): ");
    scanf("%s",&sexo);
    
    printf("digite o salario: ");
    scanf("%f",&salario);
                  
    salariototal=salariototal+salario;
    

    
    if(maioridade<idade)
    {
                        maioridade=idade;
                        
                        }
                        
    if(menoridade>idade)
    {
                        menoridade=idade;
                        
                        }  
                        
    if((strcmp(sexo,"f") == 0)&& (salario<500))
    {
                 feminino++;
                 
                 }
                 
    printf("digite a idade: ");
    scanf("%d",&idade);
                                       
  cont++;  
  
}

mediasalario=salariototal/cont;

                               printf("a media dos salarios e: %.2f\n\n ",mediasalario);
                               
                               printf("a maior idade e %d\n\n ",maioridade);
                               
                               printf("a menor idade e %d\n\n ",menoridade);
                               
                               printf("a quantidade de mulheres que tem salario maior que 500 reais e %d\n\n ",feminino);

   system ("pause");
}
