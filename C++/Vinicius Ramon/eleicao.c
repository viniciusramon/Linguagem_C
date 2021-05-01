#include <stdio.h>

main()
{
      
int candidato,cont=0,candidato1=0,candidato2=0,candidato3=0,candidato4=0,votonulo=0,votobranco=0;

      printf("digite em qual candidato vc vai vota, nos candidatos 1, 2, 3 ou 4: ");
      scanf("%d",&candidato);
      
      while(candidato!=0)
      {
                         
      if(candidato==1)
      {
                      candidato1++;
                      }
                      
                      else if(candidato==2)
                      {
                           candidato2++;
                           }
                           
                           else if(candidato==3)
                           {
                                candidato3++;
                                }
                                
                                else if(candidato==4)
                                {
                                    candidato4++;
                                    }
                                    
                                    else if(candidato==5)
                                    {
                                         votonulo++;
                                         }
                                         
                                         else
                                         {
                                             votobranco++;
                                             }
                                             
      printf("digite em qual candidato vc vai vota, nos candidatos 1, 2, 3 ou 4: ");
      scanf("%d",&candidato);
      
                                             cont++;
                                             
                                             }

printf("\ncandidato 1 teve %d de votos\n\n",candidato1);

printf("candidato 2 teve %d de votos\n\n",candidato2);

printf("candidato 3 teve %d de votos\n\n",candidato3);

printf("candidato 4 teve %d de votos\n\n",candidato4);

printf("houve %d votos nulos\n\n",votonulo);

printf("houve %d votos em branco\n\n",votobranco);

system ("pause");
}
