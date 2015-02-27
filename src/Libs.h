/*
 * Libs.h
 *
 *  Created on: 27/2/2015
 *      Author: utnso
 */

#ifndef SRC_LIBS_H_
#define SRC_LIBS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <resolv.h>
#include <fcntl.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>
#include <errno.h>
#include <string.h>

/*
 * conectar (ip, puerto)
 * Crea un socket y lo conecta
 * Devuelve el descriptor del socket
 */
int conectar (char*, char*);

/*
 * enviar (descriptor, data, datalength)
 * Manda data
 * Devuelve bytecount del send
 */
int enviar (int, char*, int);

/*
 * recibir (descriptor, buffer, datalength)
 * Recibe los datos en el buffer
 * Devuelve bytecount del recv
 */
int recibir (int, char*, int);

/*
 * contarDigitos (numero)
 * Devuelve la cantidad de digitos del numero
 * Devuelve la cantidad de digitos + 1 si es negativo
 */
int contarDigitos (int);




#endif /* SRC_LIBS_H_ */