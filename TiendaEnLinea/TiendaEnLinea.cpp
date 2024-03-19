//Situación problema: Calculadora de precios en Linea
//30/01/2023
//Enrique Garcia A01705747
//Alejandro Rodriguez A01722329
//Mateo Zepeda A01722398

#include <iostream>
using namespace std;

//Definir clase de envio
class Envio{
  private:
    string destino;
    float distancia;
    float costoGas;
    float masaProducto;
    float costoKilo;
    float costoEnvio;

  public:
    Envio();
    Envio(string, float, float, float, float);

    float CaluclaCosto();
    void muestraDatos();
};

//Definir constructores clase Envio
Envio::Envio(){
    destino = "N/A";
    distancia = 0.00;
    costoGas = 0.00;
    masaProducto = 0.00;
    costoKilo = 0.00;
  }

Envio::Envio(string _destino, float _distancia, float _costoGas,float _masaProducto, float _costoKilo ){
      destino = _destino;
      distancia = _distancia;
      masaProducto = _masaProducto;
      costoKilo = _costoKilo;
      costoGas = _costoGas;
    }

//Definit métodos de la clase Envio
float Envio::CaluclaCosto(){
  // Rendimiento de 0.2L por kilometro y se estiman 100 prodcutos por camión 
  return (distancia * 0.2 * costoGas) / 100 + masaProducto * costoKilo;
}

void Envio::muestraDatos(){
  cout << endl <<"_____________________________________________";
  cout << endl << "El envío con destino: "<< destino; 
  cout << endl << "Con distancia de: " << distancia << "km";
  cout << endl << "Y paquete de masa: " << masaProducto << "kg" ;
  //cout << endl << "Tiene un costo de: " << costoEnvio();
}

//Declarar clase de Producto
class Producto{
  private:
    string nombre;
    Envio InfoEnvio;
    float costoEnvio;
    
  public:
    Producto();
    Producto(string, Envio, float);
    void muestraDatos();
};

//Definir constructores clase Producto
Producto::Producto(){
  nombre = "N/A";
  InfoEnvio = Envio();
  costoEnvio = 0;
}

Producto::Producto(string _nombre, Envio _InfoEnvio, float _costoEnvio){
  nombre = _nombre;
  InfoEnvio = _InfoEnvio;
  costoEnvio = _costoEnvio;
}

//Definir métodos clase Producto
void Producto::muestraDatos(){
  cout << "=============================================" << endl;
  cout << "Nombre del producto: " << nombre << endl;
  cout << "Costo Envio: $" << costoEnvio << endl;
  cout << "Infomración de envio: ";
  InfoEnvio.muestraDatos();
}

int main() {
  Envio envio1("La Roma, no. 350, CDMX", 910, 21.83, 3, 20);
  Producto producto1("Lampara", envio1, envio1.CaluclaCosto());
  producto1.muestraDatos();
}