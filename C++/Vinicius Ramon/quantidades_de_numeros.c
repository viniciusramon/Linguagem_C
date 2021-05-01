#include <stdio.h>
main()
{
      
int n,tn=0,soma=0,cont=0,maior,menor,par=0,impar=0,porimpar;

float mn,mnumeropar;

    printf("digite um numero: ");
    scanf("%d",&n);
    
    maior=n;
    menor=n;
    
    while(n>=0)
    {
      tn=tn+n;
      
      cont++;
      
      if(n>maior)
      {
       maior=n;
       }
       
           if(n<menor)
      {
                       menor=n;
                       }  
                          
      if((n%2)==0)
      {
                  soma=soma+n;
                  par++;
      }        
      
               else{
               impar++;
                }
      
      printf("digite um numero: ");
      scanf("%d",&n);
    
              } 
              
              mn=tn/cont;
              
              mnumeropar=soma/par;
              
              porimpar=(impar*100)/cont;
              
              printf("a soma dos numeros digitado e %d\n\n ",tn);
              
              printf("a quantidade de numeros digitados e de %d\n\n",cont);
              
              printf("a media dos numeros digitado e %.2f\n\n",mn);
              
              printf("o maior numero digitado e %d\n\n",maior);
              
              printf("o menor numero digitado e %d\n\n",menor);
              
              printf("a media dos numeros pares digitados e %.2f\n\n",mnumeropar);
              
              printf("a porcentagem de numeros impares e %d\n\n",porimpar);
              
              while(1);
              
              }
              
