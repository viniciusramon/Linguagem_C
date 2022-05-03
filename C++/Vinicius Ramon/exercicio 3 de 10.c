#include <stdio.h>
main()
{
      float celsius,faren;
      
      for(faren=40;faren<80;faren++)
      {
           celsius=((5.0/9.0)*(faren-32));
           printf("%.2f farenheight e %.2f graus celsius\n",faren,celsius);
           }
      system("pause");
           }            
