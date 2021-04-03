#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void binario(int n){ //Funcion para convertir el valor ASCII a binario
	if(n!=0){
		binario(n/2);
		printf("%i", n%2);
	}
}

int main(){
	//Inicializando variables
	char mensaje[2024];
	int cont;
	
	//Pidiendole frase al usuario
	printf("--Bienvenido al programa de codificacion a binario--\n");
	printf("  Por favor escriba su mensaje a codificar: "); gets(mensaje);
	int n[strlen(mensaje)];
	
	//Conversion a binario
	for(cont=0;cont<strlen(mensaje);cont++){
		n[cont]=mensaje[cont];
		if(n[cont]>63&&n[cont]<128){
			printf("0");
		} else if(n[cont]>31&&n[cont]<=63){
			printf("00");
		} else if(n[cont]>15&&n[cont]<=31){
			printf("000");
		} else if(n[cont]>7&&n[cont]<=15){
			printf("0000");
		} else if(n[cont]>3&&n[cont]<=7){
			printf("00000");
		} else if(n[cont]>1&&n[cont]<=3){
			printf("000000");
		} else if(n[cont]==1){
			printf("0000000");
		}
		binario(n[cont]);
		printf(" ");
	}
	
	
	printf("\n\nFin del programa...");getch();
	return 0;
}
