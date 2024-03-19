// Este programa crea y manipula objetos de las clases circulo y coordenada

#include <iostream>

using namespace std;

//Declarar las clases
class Coordenada{
    private:
        int x;
        int y;

    public:
        Coordenada();
        Coordenada(int, int);

        void setX(int);
        void setY(int);

        int getX();
        int getY();

        void muestraCoordenada();
};

class Circulo{
    private:
        //Declaración de composición
        Coordenada centro;
        int radio;

    public:
        Circulo();
        Circulo(Coordenada, int);

        void setCentro(Coordenada);
        void setRadio(int);

        Coordenada getCentro();
        int getRadio();

        //Método procedimental 
        void muestraCirculo();
};


//Definir los metodos
//metodos de la clase Coordenada
Coordenada::Coordenada(){
    x = 1;
    y = 1;
}

Coordenada::Coordenada(int _x, int _y){
    x = _x;
    y = _y;
}

void Coordenada::setX(int _x){
    x = _x;
}

void Coordenada::setY(int _y){
    y = _y;
}

int Coordenada::getX(){
    return x;
}

int Coordenada::getY(){
    return y;
}

void Coordenada::muestraCoordenada(){
    cout << endl << "Datos de Coordenada: " << x << "   ,   " << y << endl; 
}

//Metodos de clase con composición 
Circulo::Circulo(){
    Coordenada _centro; //Crear objto de la clase para ponerlo default

    centro = _centro;
    radio = 1;
}

Circulo::Circulo(Coordenada _centro, int _radio){
    centro = _centro;
    radio = _radio;
}

void Circulo::setCentro(Coordenada _centro){
    centro = _centro;
}

void Circulo::setRadio(int _radio){
    radio = _radio;
}

Coordenada Circulo::getCentro(){
    return centro;
}

int Circulo::getRadio(){
    return radio;
}

void Circulo::muestraCirculo(){
    cout << endl << "**************************************" << endl;
    cout << "Datos del circulo: " << endl;
    cout << "Centro: "<< endl;

    // Si se puede poner en cout los métodos, pero no clases. Como lo estaría siendo la seguda
    cout << "Centro: " << centro.getX() << "    ,   " << centro.getY() << endl;
    //centro.muestraCoordenada();
    
    cout << "Radio: " << radio << endl; 
}

//Crear y utilizar objetos en el main
int main(){
    Coordenada origen(0,0), coord1, coord2(2,7),coord3(-1,5);
    Circulo ciruclo1, circulo2(origen, 10), circulo3(coord1, 5);

    //Muesta los datos de las coordenadas
    origen.muestraCoordenada();
    coord1.muestraCoordenada();
    coord2.muestraCoordenada();
    coord3.muestraCoordenada();

    ciruclo1.muestraCirculo();
    circulo2.muestraCirculo();
    circulo3.muestraCirculo();
    
    return 0;
}
