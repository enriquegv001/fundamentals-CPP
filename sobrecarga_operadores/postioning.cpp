#include <iostream> 
using namespace std;

class Position
{
    public:
        int x = 10;
        int y = 20;
        Position operator + (Position pos){
            Position new_pos;
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }

        bool operator == (Position pos){
            return x == pos.x && y == pos.y;
        }

        void muestraDatos(){
            cout << x << "  " << y;
        }

};


int main(){
 Position pos1, pos2;
 Position pos3 = pos1 + pos2;
 cout << pos3.x << " " << pos3.y;
 
 pos2.x = 100;

cout << endl;
pos1.muestraDatos();
cout << "   ";
pos2.muestraDatos();
cout << endl;

 if (pos1 == pos2){
    cout << endl <<"they are the same";
 } 
 else {cout << "Different!";};
 
}