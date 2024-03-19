#include <iostream> 
using namespace std;


class Complejo{

    //friend Complejo operator -- (Complejo num);

    private:
        int real, imag;
    
    public:
        //constructor
        Complejo(int r = 0, int i = 0) {real = r; imag = i;}

        //sobrecarga
        friend void operator--(Cpmplejo dato);
        void operator ++ (int);
        

        //Método 
        void muestraDatos() {cout << real << " + i" << imag << '\n';}
};

void Complejo::operator ++ (int){
    real++;
    imag++;
}

void operator -- (Complejo dato){
    dato.real--;
    dato.imag--;
}

 //Definir objetos correr sus métodos
int main(){
    Complejo a(8,5);
    cout << "Incremento: " ;
    a++;
    a.muestraDatos();
    cout << "Decremento: " ;
    a--;
    a.muestraDatos();
}