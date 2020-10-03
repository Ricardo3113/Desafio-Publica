#include <stdio.h>


int main(){

	int resposta,jogo=1,placar,minimo_temporada=1001,maximo_temporada=0;
	int recorde_minimo=0,recorde,maximo=0;
	int cont_minimo=0,cont_maximo=0;


	printf("Digite 1 se deseja jogar e 0 se deseja sair:");
	scanf("%d",&resposta);





	while(resposta==1){	//Enquanto "resposta" for 1, o codigo n~ao sai do looping

		printf("Digite o placar do jogo:");
		scanf("%d",&placar);

		while(placar>999||placar<0){	//Verifica se o placar e valido
			printf("Placar invalido, digite outro:");
			scanf("%d",&placar);
		}

		if(placar<minimo_temporada) {
			minimo_temporada=placar;	//Insere o valor do placar no minimo
			cont_minimo+=1;	//Contador de Quebra de recorde minimo
		}
		if(placar>maximo_temporada){
		 	maximo_temporada=placar;	//Insere o valor do placar no maximo
		 	cont_maximo+=1;	//Contador de Quebra de recorde maximo
		 }

		 if(jogo==1){	//Primeiro caso, onde a quebra dos recordes permancem zerados
		 	cont_minimo=0;
		 	cont_maximo=0;
		 }

			printf("\n\n");
			printf("Jogo:%d\n",jogo);
			printf("Placar:%d\n",placar);
			printf("Minimo da temporada:%d\n",minimo_temporada);
			printf("Maximo da temporada:%d\n",maximo_temporada);
			printf("Quebra de recorde minimo:%d\n",cont_minimo);
			printf("Quebra de recorde maximo:%d\n",cont_maximo);
			printf("\n\n");

			jogo+=1;





		printf("Digite 1 se deseja jogar e 0 se deseja sair:");
		scanf("%d",&resposta);
		printf("\n\n");


	}









return 0;
}
