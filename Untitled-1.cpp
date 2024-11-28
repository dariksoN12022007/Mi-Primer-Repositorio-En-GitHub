#include<iostream>
#include<string>
using namespace std;

class Mascota{
    private:
    string nombre;
    string sexo;
    int edad;
    public:
    Mascota(string,string,int);
    void mostrarMascota();
};
class Gato : public Mascota{
    private:
     string raza;
     public:
     Gato(string,string,int,string);
     void llenarMascota();
     void mostrarGato();

};

Mascota::Mascota(string _nombre, string _sexo, int _edad){
    nombre = _nombre;
    sexo = _sexo;
    edad = _edad;
}


Gato::Gato(string _nombre, string _sexo, int _edad, string _raza) : Mascota(_nombre,_sexo,_edad){
    raza = _raza;
}

void Mascota::mostrarMascota(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Gato::mostrarGato(){
    mostrarMascota();
    cout<<"Raza: "<<raza<<endl;
}

int main(){
    Mascota m("Many", "Masculino", 4);
    Gato m2("Marco","Masculino",8,"Egipcio");

    cout<<"\n-Macota:\n";
    m.mostrarMascota();
    cout<<"\n-Gato:\n";
    m2.mostrarGato();
}