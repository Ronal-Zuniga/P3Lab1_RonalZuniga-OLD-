#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int opcion = 0;
    while (opcion != 3) {
        cout << "1. Ejercicio 1\n";
        cout << "2. Ejercicio 2\n";
        cout << "3. Salir\n";
        cout << "\n";
        cout << "Ingrese la opcion que desea: ";
        cin>>opcion;
        cout << "\n";
        while (opcion <= 0 || opcion > 3) {
            cout << "Ingrese una opcion dentro del rango\n";
            cout << "Ingrese la opcion que desea: ";
            cin>>opcion;
            cout << "\n";
        }

        if (opcion == 1) {
            cout << "SUMATORIA DE K\n";
            cout << "\n";
            
        }//fin del if

        if (opcion == 2) {
            cout << "FUNCION SIGMOIDE\n";
            cout << "\n";
            cout << "Ingrese el valor de X:";
            int x;
            cin>>x;
            double aux;
            aux = exp(x);
            double funcion = 1/(1+aux);
            cout << "El resultado de la funcion con x = " << x << " es = " << funcion << endl;
            cout << "\n";
        }//fin del if
    }//fin del while
	return 0;
}
