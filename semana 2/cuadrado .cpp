//ejercicio de encontrar el lado, el área y la diagonal de un cuadrado.

#include<stdio.h>
#include<math.h>
int main ()  {

           int lado = 6;
           int perimetro = 4 * lado ;
           int area = lado * lado;
           double diagonal = sqrt(2) * lado;

           printf("El area del cuadrado es: %d\n", area); 
           printf("El perimetro del cuadrado es: %d\n", perimetro);
           printf("La diagonal del cuadrado es: %.4f\n", diagonal);
return 0;
}
