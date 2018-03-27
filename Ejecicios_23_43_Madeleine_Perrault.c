//Con Raphael Cohen hicimos este trabajo juntos, por eso tenemos el mismo trabajo

//  Ejercicio 23


#include <stdio.h>

int main(){
    int a,b;
    
    printf("Ingrese un nombre entero entre 1 y 366 \n ");
    scanf("%u",&a); // Si la personna ingrese un float, el algoritmo va hacer un troncamiento. Y dar entonces el buen dia
    if (a<1 || a>366){
        printf("Ingrese un nombre entero que es entre 1 y 366 \n "); // Hay 366 dias en un ano
        scanf("%u",&a);
    }
    b=a%7; // Utilizamos un modulo para saber el dia. Entonces vamos a utilizar un switch para saberlo
    
    switch (b) {
        case 1:
            printf("Es un domingo");
            break;
        case 2:
            printf("Es un lunes");
            break;
        case 3:
            printf("Es un martes");
            break;
        case 4:
            printf("Es un miercoles");
            break;
        case 5:
            printf("Es un jueves");
            break;
        case 6:
            printf("Es un viernes");
            break;
        case 7:
            printf("Es un sabado");
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}




// Ejercicio 43

#include <stdio.h>

int main(){
    float redimiento,max,min,a,b,c,d,total_dist,combustible_tot,costo_tot;
    int i;
    min=1000000.0;
    max=0.0;
    redimiento=0.0;
    i=0;
    total_dist=0.0;
    combustible_tot=0.0;
    costo_tot=0.0;
    while (a != -1.0)  // Si la personna escribe -1 en la terminal, el algoritmo va acabarse
    {
        printf("Ingrese los kilometros recorridos (-1 para terminar): ");
        scanf("%f",&a);
        if (a !=-1){
            printf("Ingrese el precio del combustible por litro: ");
            scanf("%f",&b);
            printf("Ingrese el monto total utilizado en este compra: ");
            scanf("%f",&c);
            printf("Rendimiento (l/100km) de este tanque >> ");
            d=((c/b)*100)/a;
            printf("%f \n\n",d);
            if(d<min)
            {
                min=d;
            }
            if(d>max)
            {
                max=d;
            }
            redimiento=redimiento+d;
            i++;
            total_dist+=a;
            combustible_tot+=(c/b);
            costo_tot+=c;
        }
    }
    redimiento=redimiento/i;
    printf(" \n\nRendimiento promedio (l/100km) >> %f \n",redimiento);
    printf("Mejor rendimiento (l/100km) >> %f \n",min);
    printf("Peor rendimiento (l/100km) >> %f \n",max);
    printf("Distancia total recorrida (km) >> %f \n",total_dist);
    printf("Combustible total consumidos (l) >> %f \n",combustible_tot);
    printf("Costo total de su vehiculo ($) >>  %f \n", costo_tot);
    return 1;
}

