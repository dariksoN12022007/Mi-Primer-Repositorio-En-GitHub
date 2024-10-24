#include<iostream>
#include<string>

using namespace std;

int main ()  {

            string Mi_Nombre = "Darikson";  // declaramos la cadena de texto 
            string Encriptador = "  ";   // donde se almacenara nuestro nombre encriptado 


            for ( char letra : Mi_Nombre ) {   // usamos el bucle para que recorra cada letra de nuestro nombre

                Encriptador += char( letra + 8 ); // v  Encriptador = Encriptador + char( letra + 8 ), lo ponemos con "char"
            }                                     // y le sumanos la razon en el cual queremos que aumente


             cout<<" Mi nombre encriptado es: "<<Encriptador<<endl;


    return 0;
}