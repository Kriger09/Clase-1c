#include <iostream>
#include <cstdlib>

using namespace std;

string nombre, apellido;
int edad;

int main(){
    cout<<"Escribe tu nombre:"<< endl;
    cin>> nombre;
    cout<<"Escribe tu apellido"<< endl;
    cin>> apellido;
    cout<<"Escribe tu edad"<< endl;
    cin>> edad;
    cout<<"Tu edad es de:"<<edad << endl;

    system( "read -n 1 -s -p \"Presione cualquier tecla para continuar. .\"" );
    return 0;
}
