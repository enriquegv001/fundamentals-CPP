//Usuarios y Desarrolladores con Composición 
//24/01/2023
//Enrique Garcia A01705747
//Alejandro Rodriguez A01722329
//Mateo Zepeda A01722398

#include <iostream>
using namespace std;

// Declaracion de clase Luces
class Luces{
  // Declaracion de atributos de la clase Luces
  private:
    bool prendida;
    string color;
  // Declaracion de metodos de la clase Luces
  public:
    Luces();
    Luces(bool, string);
    void prenderLuces();
    void apagarLuces();
    void cambiarColor(string);
    void muestraDatos();
};

// Constructores de clase Luces
Luces::Luces(){
  prendida = false;
  color = "blanco";
}

Luces::Luces(bool _prendida, string _color){
  prendida = _prendida;
  color = _color;
}

// Definicion de metodos de la clase Luces
void Luces::prenderLuces(){
  prendida = true;
}

void Luces::apagarLuces(){
  prendida = false;
}

void Luces::cambiarColor(string _color){
  color = _color;
}

void Luces::muestraDatos(){
  cout << endl << "Prendidas: " << prendida << endl << "Color: " << color;
}

// Declaracion de la clase AsistenteVoz
class AsistenteVoz{
  // Declaracion de los atributos de la clase AsistenteVoz
  private:
    int volumen;
    string idioma;
    string marca;
    string voz;
    Luces luces;

  // Declaracion de metodos de la clase AsistenteVoz
  public:
    AsistenteVoz();
    AsistenteVoz(int, string, string, string, Luces);
    void cambiarColorLuz(string);
    void muestraDatos();
    
};

// Constructores de la clase AsistenteVoz
AsistenteVoz::AsistenteVoz(){
  volumen = 0;
  idioma = "Ingles";
  marca = "N/A";
  voz = "N/A";
  luces = Luces();
}

AsistenteVoz::AsistenteVoz(int _volumen,string _idioma,string _marca,string _voz,Luces _luces){
  volumen = _volumen;
  idioma = _idioma;
  marca = _marca;
  voz = _voz;
  luces = _luces;
}

// Definicion de metodos de la claseAsistenteVoz
void AsistenteVoz::cambiarColorLuz(string _color){
  luces.cambiarColor(_color);
}

void AsistenteVoz::muestraDatos(){
  cout << endl << "_________________________________________" << endl;
  cout << "Marca: " << marca << endl;
  cout << "Idioma: " << idioma << endl;
  cout << "Volumen: " << volumen << endl;
  cout << "Voz: " << voz << endl;
  cout << "Informacion de Luces: ";
  luces.muestraDatos();
  cout << endl << "_________________________________________" << endl;
  
}

class CasaInteligente{
  private:
    AsistenteVoz Voz;
    string direccion;
    int cp;
    int PanelesSolares;

  public:
    CasaInteligente();
    CasaInteligente(AsistenteVoz, string, int, int);
    void muestraDatos();
    
};


// Constructores de la clase AsistenteVoz
CasaInteligente::CasaInteligente(){
  Voz = AsistenteVoz();
  direccion = "Tecnologico 120, Monterey";
  cp = 64700;
  PanelesSolares = 3;
}

CasaInteligente::CasaInteligente(AsistenteVoz _voz, string _direccion, int _cp, int _PanelesSolares){
  Voz = _voz;
  direccion = _direccion;
  cp = _cp;
  PanelesSolares = _PanelesSolares;
}

//Definir método de la clase AsistenteVoz
void CasaInteligente::muestraDatos(){
  cout << "=====================================================" << endl; 
  cout << "dirección: " << direccion << endl;
  cout << "cp: " << cp << endl;
  cout << "Cantidad de paneles solares: " << PanelesSolares << endl;
  cout << "Asistente de voz: " ;
  Voz.muestraDatos();
  cout <<endl;
  
}



//Crear objetos y muestra datso
int main() {
  AsistenteVoz voz1 ;
  CasaInteligente Casa1(voz1,"Av Morelos 821",88362,10),Casa2,Casa3(AsistenteVoz(),"Calle 16 de Septiembre 9218",66543,4);
  Casa2.muestraDatos();
  //Casa2.CasaInteligente(Luces(cambiarColorLuz("Rojo")));
  Casa1.muestraDatos();
  return 0;
}