# include <iostream>

using namespace std;


class Arbol{
    /*
    OPERADORES DE ACCESO:
        public: elemento accesible desde fuera del objeto.
        private: elemento accesible solo desde dentro del objeto.

    Por convención es mejor privado.
    */
    private:
        string especie;
        float tamanio;
        float edad;
    public:
        // Constructor por omisión.
        Arbol(){
            especie = "Desconocida";
            edad = 0;
            tamanio = 1;
        }

        // Constructor con parámetros.
        Arbol(string _especie, float _edad, float _tamanio){
            especie = _especie;
            edad = _edad;
            tamanio = _tamanio;
        }

        // Getters recuperan el valor de un atributo privado.
        string get_especie(){
            return especie;
        }

        float get_edad(){
            return edad;
        }

        float get_tamanio(){
            return tamanio;
        }

        // Setters modificar el valor de un atributo privado.

        float set_edad(float _edad){
            edad = _edad;
        }

        float set_tamanio(float _tamanio){
            tamanio = _tamanio;
        }

        string set_especie(string _especie){
            especie = _especie;
        }
        

        void crece(float tam){
            tamanio += tam;
        }
        
        void imprime_datos() {
            cout << "Especie: " << especie << endl;
            cout << "Edad: " << edad << endl;
            cout << "Tamano: " << tamanio << endl;
        }
};

int main(){
    Arbol abedul;
    abedul.imprime_datos();
    abedul.set_edad(5);
    abedul.set_especie("Abedul");
    abedul.set_tamanio(15);
    abedul.imprime_datos();
    
    Arbol pino = Arbol("Pino", 6, 20);
    pino.imprime_datos();

    // Ejemplo get.
    cout << "Especie: " << pino.get_especie() << endl;

    return 0;
}
