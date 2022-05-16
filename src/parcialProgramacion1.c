/*
 ============================================================================
 Name        : parcialProgramacion1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int id;
	int procesador;
	int marca;
	float precio;
}eNotebooks;
float aplicarDescuento(float precioProducto);
void ordenarNotebooksDosCriterios(eNotebooks vec[],int tam);

int main(void) {
	setbuf(stdout,NULL);
	float precioProducto=100.0;
	float resultado;
	resultado=aplicarDescuento(precioProducto);

	printf("%f\n",resultado);



	return EXIT_SUCCESS;
}

float aplicarDescuento(float precioProducto )
{
	int descuento=5;
	float precioDescuento;
	float resultado;

	precioDescuento=(precioProducto)*(descuento/100);
	printf("%f\n",precioDescuento);
	resultado=(precioProducto-precioDescuento);
	printf("%f\n",resultado);
	return resultado;
}
void ordenarNotebooksDosCriterios(eNotebooks vec[],int tam)
{
	eNotebooks auxNotebook;
	if(vec!=NULL && tam>0)
			{
				for( int i=0; i<tam-1; i++)
				{
					for(int j=1+i; j<tam; j++)
					{
						 if(vec[i].marca == vec[j].marca) //cuando son del mismo sexo
						 {
							 if(vec[i].precio > vec[j].precio) // swap cuando son del mismo sexo para ordenar por ID
							 {
								 auxNotebook=vec[i];
								 vec[i]=vec[j];
								 vec[j]=auxNotebook;
							 }
						 }
						 else //caigo cuando son empleados de distinto sexo
						 {
							 if(vec[i].marca > vec[j].marca)
						 	 {
								 	 auxNotebook=vec[i];
									 vec[i]=vec[j];
									 vec[j]=auxNotebook;
						 	 }

						 }
					}
				}
			}
}
