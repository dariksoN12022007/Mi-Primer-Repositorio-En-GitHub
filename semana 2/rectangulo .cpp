//ejercicio del rectángulo 

#include<stdio.h>
#include<math.h>
int main()  {

           int base = 8;
           int altura = 6;
           int area = base * altura;
           int perimetro = 2 * ( base + altura );
           int diagonal = sqrt ( base * base + altura * altura );

          printf(" El area del rectangullo es: %d\n", area );
          printf(" El perimetro del rectangulo es: %d\n", perimetro);
          printf(" La diagonal del rectangulo es: %d\n", diagonal);
 return 0;
}
