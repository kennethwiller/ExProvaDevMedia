#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int codC = 123; //c�digo cadastrado
int cod; // c�digo que o usu�rio vai digitar 
int sC = 9999; // senha cadastrada
int s; //senha que o usu�rio vai digitar 
int i; // recebe o valor de de tentar novamente ou encerra programa

int menu() {
	
	printf("1 - Tentar novamente\n");
	printf("2 - encerra programa\n");
	scanf("%i", &i);
			
			switch (i) {
				
				case 1:
					return main();
				break;
				
				case 0: 
					exit(1);
				break;	
			}
	return 0;					
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o seu c�digo de usu�rio: ");
	scanf("%i", &cod);
	
	if (cod != codC) {
		printf("Usu�rio Inv�lido\n");
		exit(1);
	}
	else {
		printf("Informe sua senha: ");
		scanf("%i", &s);
		
		if (s == sC) {
			printf("Acesso permitido!");
		}
		else {
			printf("Senha incorreta! \n\n");
			
			system ("clear");
			menu();
			
		}
		
	}
	
	return 0;
}
