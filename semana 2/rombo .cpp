//ejercicio del rombo 

#include<stdio.h>
#include<math.h>
int main()  {
           
           int DiagonalMayor = 8;
           int DiagonalMenor = 6;
           int area = (DiagonalMayor * DiagonalMenor) / 2;
           int lado = sqrt(pow (DiagonalMayor / 2, 2) + pow (DiagonalMenor / 2, 2));
           int perimetro = 4 * lado;
           
           printf("El area del rombo es: %d\n", area);
           printf("El lado del rombo es: %d\n", lado);
           printf("El perimetro del rombo es: %d\n", perimetro);
return 0; 
}
