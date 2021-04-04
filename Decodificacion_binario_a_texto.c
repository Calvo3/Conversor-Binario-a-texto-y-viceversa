#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<conio.h>

int main(){
	//Inicializando variables
	char mensaje[1024];
	int cont,cont2,cont3=0, n=0, mensaje1;
	
	//Recogiendo variables
	printf("--Bienvenido al programa de decodificacion de binario a texto--");
	printf("Escriba su mensaje en binario, teniendo cuenta que cada letra cuenta con 8 bits: "); gets(mensaje);
	printf("\nMensaje Decodificado: ");
	//decodificacion de binario a texto
	for(cont=0;cont<strlen(mensaje);cont=cont+9){
		for(cont2=cont+7;cont2>=cont;cont2--){
			mensaje1=mensaje[cont2]-'0';
			n=n+((mensaje1)*pow(2,cont3));
			
			cont3++;
		}
		printf("%c", n);
		n=0;
		cont3=0;
	}
	
	
	
	
	printf("\nFin del programa...");getch();
	return 0;
}
