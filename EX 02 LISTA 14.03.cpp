#include<stdio.h>
#include<locale.h>


main (){
	setlocale(LC_ALL,"Portuguese");
	
	int ano, Aatual;
	
   printf("Em qual ano você está? (escreva com os 4 digitos): ");
    scanf("%d", &Aatual);
   
   printf("Escreva o seu ano de nascimento com os 4 digitos: ");
    scanf("%d", &ano);
	
	
  if (ano > Aatual){
  	printf("Você ainda não pode votar, pois tem menos de 16 anos");
  }		
  
  if (ano < Aatual){
  	printf("Você já pode votar, pois ja tem mais de 16 anos");
  }
  
  

}

