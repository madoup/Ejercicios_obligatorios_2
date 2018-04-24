

//Guia 2
// Ejercicio 5


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846

void spectral_t(int Temperatura){

    char clase; 
    
    if (Temperatura<=50000 && Temperatura>=28000){
        printf("La color de este cuerpo es Azul \n");
        clase = 'O';
    }
    else if (9600<=Temperatura && Temperatura<=28000){
        printf("La color de este cuerpo es Blanco Azulado\n");
        clase = 'B';
    }
    else if (7100<=Temperatura && Temperatura<=9600){
         printf("La color de este cuerpo es Blanco\n");
        clase = 'A';
    }
     else if (5700<=Temperatura && Temperatura<=7100){
        printf("La color de este cuerpo es Blanco amarillento\n");
        clase = 'F';
    }
     else if (4600<=Temperatura && Temperatura<=5700){
         printf("La color de este cuerpo es Amarillo\n");
        clase = 'G';
    }
     else if (3200<=Temperatura && Temperatura<=4600){
         printf("La color de este cuerpo es Naranja\n");
        clase = 'K';
    }
    else if (1700<=Temperatura && Temperatura<=3200){
         printf("La color de este cuerpo es Rojo\n");
        clase = 'M';
    }             
}
/*
int main()
{
	int Temperatura;
	printf("Ingrese una Temperatura de un cuerpo celeste\n ");
	scanf("%d",&Temperatura); 
	while (Temperatura>50000 || Temperatura < 1700)
	{
			printf("El entero es grande Ingrese una otra Temperatura de un cuerpo celeste entre 1700 y 50000:\n ");
			scanf("%d",&Temperatura); 
	}
	spectral_t(Temperatura);
	return 0;
}
*/

/*

------ GUIA 3 --------

Ejercicio 6 : 

//a*/

float cilindro_diametro(int radio, int altura){
	float diametro; 

	diametro = radio*2;

	printf("%f\n", diametro);
	return diametro;
}
//b
float cilindro_circunferencia(int radio, int altura){
	float circunferencia;

	circunferencia = radio*2*PI;
	printf("%f\n", circunferencia );
	return circunferencia;
}
//c
float cilindro_base(int radio, int altura){
	float base;

	base= radio*radio*PI;
	printf("%f\n", base );
	return base;
}
//d
float cilindro_volumen(int radio, int altura){
	float volumen;

	volumen = radio*radio*PI*altura;
	printf("%f\n",volumen );
	return volumen;
}

/*
int main()
{
	cilindro_diametro(4,8);	
	cilindro_circunferencia(4,8);
	cilindro_base(4,8);
	cilindro_volumen(4,8);
}


*/

//Ejercicio 13: Probabilidades

//a

float Probabilidades1 (float x){
	if (x==1)
	{
		printf("La probabilidad de x es 0,8\n");
	}
	else if (x==0)
	{
		printf("La probabilidad de x es 0,2\n");
	}
	else {
		printf("La probabilidad de x es 0\n");
	
	}
	return 0;
}

//b

float Probabilidades2 (int x){
	switch (x){
		case 3:
			printf("La probabilidad de x=3 es 0,1\n");
			break;
		case 5:
			printf("La probabilidad de x=5 es 0,55\n");
			break;
		case 9:
			printf("La probabilidad de x=9 es 0,35\n");
			break;
		default:
            printf("Este numero no tiene probabilidad\n");
            break;

	}
	return 0;
}

//c

int Probabilidades3 (int x){
	switch(x){
		case 1:
			printf("La moneda es Cara\n");
			break;
		case 2:
			printf("La moneda es Ceca\n");
			break;
		default:
			printf("Error\n");
			break;
	}
	return 0;
}

//d
int Probabilidades4 (int x){
	switch(x){
		case 1:
			printf("|     |\n|  *  |\n|     |\n");
			break;
		case 2:
			printf("|    *|\n|     |\n|*    |\n");
			break;
		case 3:
			printf("|*    |\n|  *  |\n|    *|\n");
			break;
		case 4:
			printf("|*   *|\n|     |\n|*   *|\n");
			break;
		case 5:
			printf("|*   *|\n|  *  |\n|*   *|\n");
			break;
		case 6:
			printf("|*   *|\n|*   *|\n|*   *|\n");
		default:
			printf("Error\n");
			break;
	}
	return 0;
}


//Ejercicio 14

void funcion(void) {
    static int x = 0; //inicializa x que es 0 y como hay "static" no se reinicia a 0 cada vez pero toma el último valor
    x++; //añadimos 1 a X cada vez 
    printf("%d\n", x); //imprimos el valor de x
}

int main(void)
{
    funcion();// inicio 0, final 1
    funcion(); // inicio 1, final 2
    funcion();// inicio 2, final 3
    funcion();// inicio 3, final 4
    funcion();// inicio 4, final 5

    return EXIT_SUCCESS;
}



//Ejercico 19

int numero_entero(long x) {
	int c=0;
        if (x < 10) {
            c += 1;
        } else {
            c+= 1 + nbChiffres(x/10);
        }
        printf("%d\n", d );
        return 0;
    }


/* 

-------- GUIA 4 --------

Ejercicio 14 

//busqueda_binaria
*/


int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int inf, sup, mitad, dato;
	char band='F';

	dato = 7;

	inf = 0;
	sup = 10;

	while(inf<=sup){
		mitad= (inf+sup)/2;
		if (a[mitad]==dato)
		{
			band ='V';
			break;
		}
		if (a[mitad]>dato)
		{
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if (a[mitad]<dato)
		{
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}

	if (band=='F')
	{
		printf("El numero no existe\n");
	}
	else if (band=='V')
	{
		printf("El numero existe, en la position %i \n", mitad );
	}

	getchar();
	return 0;
}

//Ejercicio 15
//a
void polyval(int v[], size_t n , double x){
	float res;
	for (int i = 0; i < n; ++i)
	{
		res = res*x+v[i];
		printf("%f\n",res );
	}
	printf("%f\n",res );
}

int main()
{
	int co[]={2,3,4,0};
	polyval(co, 4, 3);
	return 0;
}


//b

void diffval(int v[], size_t n, int x){
	int res=0;
	int d[n-1];

	for (int i = 0; i < n; ++i)
	{
		d[i]=v[i]*(n-(i+1));
	}


	for (int j = 0; j < n-1; ++j)
		{
			
			res = res*x+d[j];
		}
	
	printf("%d\n",res );
	
}
 
 int main()
{
	int co[]={2,3,4,5};
	diffval(co, 4, 2);
	return 0;
}

//c

void polyvalval()

//Ejercicio 19

//Siento no haber tenido tiempo de terminar. Aprendí este trabajo tarde, 
//terminaré el siguiente curso aunque no se tenga en cuenta en la nota. 
//Gracias por su comprensión.`

//Madeleine Perrault
//103113







