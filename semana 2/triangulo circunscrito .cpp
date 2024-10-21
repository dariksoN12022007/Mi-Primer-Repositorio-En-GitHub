//ejercicio de triangulo circunscrito 

#include<stdio.h>

int main () {

         int lado_A = 9;
         int lado_B = 12;
         int lado_C = 15;
         int radio = 6;
         int Semi_Perimetro = ( lado_A + lado_B + lado_C) / 2;
         int area = radio * Semi_Perimetro;    
    
          printf("El semiperimetro del trianguo inscrito es: %d\n", Semi_Perimetro);
          printf("El area del triangulo inscrito es: %d\n", area);

return 0;
}
