#include<stdio.h>
#include<locale.h>


main (){
	setlocale(LC_ALL,"Portuguese");
	
	int ano, Aatual;
	
   printf("Em qual ano voc� est�? (escreva com os 4 digitos): ");
    scanf("%d", &Aatual);
   
   printf("Escreva o seu ano de nascimento com os 4 digitos: ");
    scanf("%d", &ano);
	
	
  if (ano > Aatual){
  	printf("Voc� ainda n�o pode votar, pois tem menos de 16 anos");
  }		
  
  if (ano < Aatual){
  	printf("Voc� j� pode votar, pois ja tem mais de 16 anos");
  }
  
  

}

