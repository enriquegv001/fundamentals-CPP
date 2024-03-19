//Este programa declara y manipula las calses Automovil y Stereo

//Incluir librerias
#include <iostream>
using namespace std;

//Declarar clases
class Stereo{
    private:
        string Marca;
        string modeloStereo;
        float Potencia;
        int Bocinas;

    public:
        Stereo();
        Stereo(string, string, float, int);
        
        void muestraStereo();
};

class Automovil{
    private:
        string Fabricante;
        string Nombre;
        int Modelo;
        Stereo eqSonido;

    public:
        Automovil();
        Automovil(string, string, int, Stereo);

        void muestraAutomovil();
};

//Definir metodos
//Metodos de Stereo
Stereo::Stereo(){
    Marca = "Bose";
    modeloStereo = "EnvolventeTotal";
    Potencia = 1000;
    Bocinas = 4;
}

Stereo::Stereo(string _marca, string _modeloStereo, float _potencia, int _bocinas){
    Marca = _marca;
    modeloStereo = _modeloStereo;
    Potencia = _potencia;
    Bocinas = _bocinas;
}

void Stereo::muestraStereo(){
    cout << endl << "Stereo: " << endl;
    cout << "Marca: " << Marca << endl;
    cout << "Modelo del stereo: " << modeloStereo << endl;
    cout << "Potencia: " << Potencia << endl;
    cout << "Bocinas: " << Bocinas << endl;
}

//Definimir Métod Automovil
Automovil::Automovil(){
    Stereo basico; //Relacion de composición por defalut

    Fabricante = "Honda";
    Nombre = "Civid";
    Modelo = 2020;

    eqSonido = basico; //Atributo con la relación con la otra clase

}

Automovil::Automovil(string _fabricante, string _nombre, int _modelo, Stereo _eqSonido){
    Fabricante = _fabricante;
    Nombre = _nombre;
    Modelo = _modelo;
    eqSonido = _eqSonido;
}

void Automovil::muestraAutomovil(){
    cout << endl << "*********************************" << endl;
    cout << "Datos del automovil: " << endl;
    cout << "Fabricante: " << Fabricante << endl;
    cout << "Nombre: " << Nombre << endl;
    cout << "Modelo: " << Modelo << endl;
    eqSonido.muestraStereo();
}

//Crear objeto y utilizar en el main
int main(){
    Stereo equipo1, equipo2("Panasonic", "P4323", 300, 2), equipo3("Pioneer", "XYZAB", 700, 8);
    Automovil autoPaty, autoPancho("BMW", "i8", 2021, equipo2), autoRosita("Chevrolette", "Corvette", 2012, equipo3);

    // muestra Stereo
    equipo1.muestraStereo();
    equipo2.muestraStereo();
    equipo3.muestraStereo();
    
    autoPaty.muestraAutomovil();
    autoPancho.muestraAutomovil();
    autoRosita.muestraAutomovil();
    

    return 0;

}


