//ejercicio de triangulo con la formula de HERÓN

#include<stdio.h>
#include<math.h>
int main ()  {

        float lado_1 = 3;
        float lado_2 = 7;
        float lado_3 = 5;
        float  S_perimetro = ( lado_1  + lado_2 + lado_3 ) / 2;
        float area = sqrt( S_perimetro  * ( S_perimetro - lado_1 ) * ( S_perimetro - lado_2 ) * (S_perimetro - lado_3 ));

        printf("El semiperimetro del triangulo es: %.1f\n", S_perimetro);
        printf("El area del triangulo es: %.9f\n", area);
    return 0;
}
