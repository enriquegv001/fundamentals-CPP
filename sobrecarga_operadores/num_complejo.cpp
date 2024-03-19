//Incluir librerias
#include <iostream> 
using namespace std;

//Definir clases

class Complejo{


    private:
        int real, imag;
    
    public:
        //constructor
        Complejo(int r = 0, int i = 0) {real = r, imag = i;}

        //sobrecarga
        Complejo operator+(Complejo c2);
        friend Complejo operator-(Complejo c1, Complejo c2);
        void operator++(int){
            real++;
            imag++;
        };

        friend void operator--(Complejo dato);

        bool operator == (Complejo otro){
            return real == otro.real && imag == otro.imag;
        }
            



        //Método 
        void muestraDatos() {cout << real << " + i" << imag << '\n';}
};


//Definir los operadores
Complejo Complejo::operator+(Complejo c2){
    int realN = real + c2.real;
    int imagN = imag + c2.imag;
    Complejo nuevo(realN, imagN);
    return nuevo;
}

Complejo operator-(Complejo c1, Complejo c2){
    int realN = c1.real -  c2.real;
    int imagN = c1.imag - c2.imag;
    Complejo nuevo(realN, imagN);
    return nuevo;
}


void operator--(Complejo dato){
    dato.real--;
    dato.imag--;
};


 //Definir objetos correr sus métodos
int main(){
    Complejo a(8,5), b(10,7), c, d, e(2,2), f(2,2), r;
    c = a + b;
    d = a - b;
    cout << "números de entrada: "<< endl;
    a.muestraDatos();
    b.muestraDatos();

    cout << endl << "suma de los números: ";
    c.muestraDatos();
    cout  << "resta de los números: ";
    d.muestraDatos();

    cout << "suma 1 a: ";
    a++;
    a.muestraDatos();
    cout <<"resta 1 b: ";
    //b--;
    b.muestraDatos();
    
    //porque aquí esta dando doble.
    if (e == f){
        cout << "mismo valor para: ";
        e.muestraDatos();
        cout << "   =   "; 
        f.muestraDatos();
    } else {
        cout << "diferente valor para: ";
        e.muestraDatos();
        cout << "   !=   "; 
        f.muestraDatos();
    };
    
}