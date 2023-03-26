#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

 {
      float peso,distancia,frete;
         char opcao;
           printf("digite o peso do pacote:");
               scanf("%f", &peso);
               
               printf("informe sua distancia:");
                    scanf("%c",&distancia);
                    
                    
                    
                    if (peso<-0 || distancia<-0)
                    
                    printf("erro");
                    
                    
                    else
                       printf("informe uma das opcoes");
                         printf("\n1 pacote com peso e 1kg: R$ 5,00 por km percorrido\n");
                          printf("\n2 pacote com peso e 1kg ate 5kg: R$ 10,00 por km percorrido\n");
                           printf("\n3 pacote com peso acima de 5kg: R$ 20.00 por km percorrido\n");
                           
                switch (opcao)        
				       
				       {
					   
				          case '1':
				          	printf("\no valor do frete e: %.f \n", frete*5);
				          	   break;
				   
                    
                          case '2':
				          	printf("\no valor do frete e: %.f \n", frete*10);
				               break;
				   
                    
                          case '3':
				          	printf("\no valor do frete e: %.f \n", frete*20);
				          	    break;
		}
                    
	return 0;
}
