//ejercicio de triangulo inscrito
#include<stdio.h>
int main()  {

         int lado_a = 9;
         int lado_b = 8;
         int lado_c = 7;
         int radio = 6;
         int area = ( lado_a * lado_b * lado_c ) / ( 4 * radio );

         printf("El area del triangiulo inscrito es: %d\n", area);
return 0;
}
