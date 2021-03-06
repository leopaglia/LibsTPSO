/*
 * Test.c
 *
 *  Created on: 2/3/2015
 *      Author: utnso
 */
#include "Libs.h"

int main (){

	char* numero;
	char* letra;
	char* mensaje;
	char* handshake;

	char** variables[2]= {&numero, &letra};

	char* propiedades[2];
	string_append(&propiedades[0],"numero");
	string_append(&propiedades[1],"letra");

	char** strings[] = {&numero, &letra, &propiedades[0], &propiedades[1], &mensaje, &handshake};

	inicializarStrings(strings, 6);

	leerConfig("/home/utnso/git/CLibs/src/config.cfg", propiedades, variables, 2);

	printf("Numero: %d, letra: %s \n", atoi(numero), letra);
	printf("Digitos del numero: %d \n", contarDigitos(atoi(numero)));

	int socketServer = conectar("127.0.0.1", "5455");

	string_append(&handshake, string_itoa(strlen(mensaje)));
	enviar(socketServer, handshake, strlen(handshake));

	printf("Mensaje enviado: %s, tamano %d, largo %d \n", handshake, sizeof(handshake), strlen(handshake));

	string_append(&mensaje, "hola server \n");
	enviar(socketServer, mensaje, strlen(mensaje));

	printf("Mensaje enviado: %s \n", mensaje);

	return 0;
}
