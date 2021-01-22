#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int opcion = 0;
    while (opcion != 3) {
    	cout << "----MENU----\n";
        cout << "1. Ejercicio 1\n";
        cout << "2. Ejercicio 2\n";
        cout << "3. Salir\n";
        cout << "\n";
        cout << "Ingrese la opcion que desea: ";
        cin>>opcion;
        cout << "\n";
        while (opcion <= 0 || opcion > 3) {//valida el ingreso del usuario para elegir una opcion disponible
            cout << "Ingrese una opcion dentro del rango\n";
            cout << "----MENU----\n";
            cout << "1. Ejercicio 1\n";
        	cout << "2. Ejercicio 2\n";
        	cout << "3. Salir\n";
        	cout << "\n";
            cout << "Ingrese la opcion que desea: ";
            cin >> opcion;
            cout << "\n";
        }//fin del while de validacion

        if (opcion == 1) {//ejercicio de sumatoria
            cout << "SUMATORIA\n";
            cout << "\n";
            int n = 0;
            cout << "Ingrese el valor de n: ";
            cin >> n;
            
            while (n < 0) {//valida que solo se ingresen numeros naturales
            	cout << "n debe ser mayor o igual a 0\n";
            	cout << "Ingrese el valor de n: ";
            	cin >> n;
            	cout << "\n";
        	}//fin while de validacion
        	
        	int base = 0;
        	int sumatoria = 0;
        	int k = 0;
        	
        	for(int i = 0; i <= n; i++){//ciclo que calcula la sumatoria
        		base = (i + 1);
        		k = i * (pow(base,2));
        		sumatoria += k;
			}//fin del for
			
			cout << "El resultado de la sumatoria con n = " << n << " es = " << sumatoria << endl;
            cout << "\n";
        }//fin del if opcion 1

        if (opcion == 2) {//ejercicio de funcion sigmoide
            cout << "FUNCION SIGMOIDE\n";
            cout << "\n";
            cout << "Ingrese el valor de X:";
            int x = 0;
            cin>>x;
            double funcion = 1/(1 + exp(x));
            cout << "El resultado de la funcion con x = " << x << " es = " << funcion << endl;
            cout << "\n";
        }//fin del if opcion 2
        
    }//fin del while del menu
	return 0;
}//fin de la funcion
