#include<stdio.h>
#include<locale.h>


main (){
	setlocale(LC_ALL,"Portuguese");
	
	int senha;
	
	printf("Digite a senha númerica de 4 digitos para ter acesso: ");
	 scanf("%d", &senha);
	 
  if (senha == 1234){
  	printf("Acesso liberado");
  }	 
  
  if (senha > 1234){
  	printf("Acesso Negado");
  }
  
  if (senha < 1234){
  	printf("Acesso Negado");
  }
  
}
	 
