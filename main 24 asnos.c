#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
     int idade;
     char conceito;
        printf("informe sua idade: ");
           scanf("%d",&idade);
             
          printf("digite conceito");
           scanf("%c",&conceito);
          
          
             if  (idade >18)
             printf("conceito:")
             
            switch (conceito)
             {
            	case'1'
                    printf("\ninforme seu nome: nero silva\n");
            	    printf("\ninforme seu cpf: 01054548267\n");
            	    printf("\ninforme seu rg: 5584049\n");
            	    printf("\ninforme seu endereço: rua suribim\n");
            	    break;
            	    
               case'2'
				    printf("\ninforme sua cidade: araguaina\n");
            	    printf("\ninforme seu estado: tocantins\n");
            	    break;
            	    
            	case'3'
            	    printf("\ninforme a cidade de alistamento: maraba\n");
            	    printf("\ninforme seu estado: para\n");
            	    printf("\ninforme seu quartel: 52º bis\n");
            	    printf("\ninforme o tempo de alistamento: 4 anos\n");
            	    break;
            	
            default:
                printf("\nidade fora do cadastro do serviço militar\n");            	
            	
            	
        }
            	
            	return 0;
}
