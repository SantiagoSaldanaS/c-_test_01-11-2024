// Incluir librería para leer / escribir en consola
#include <iostream>

/*
Comentario multilínea.

Ejemplos de Funciones en C++

*/


// Indicar que se usará el namespace std
using namespace std;


void odd_number(int num){
    if (num % 2 == 0) {
        cout << "El número " << num << " es par." << endl;
    }
    else {
        cout << "El número " << num << " es impar." << endl;
    }
}


int main(){
    int num;

    cout << "Escriba un número: ";
    cin >> num;
    cout << endl;

    odd_number(num);

    return 0;
}
