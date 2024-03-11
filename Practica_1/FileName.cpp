/*Realiza la definicion de una clase que agrupa objetos que tienen tres lados
y un angulo que obligadamente vale 90". Identifique la informacion mas relevante bajo esas caracteristicas.
Pida datos: para dichos objetos y al final calcule el area de dichos objetos
Defina al menos 2 objetos. */

#include <iostream>
#include <cmath>


using namespace std;

class Triangulo {
private:
    double lado1;
    double lado2;
    double hipotenusa;

public:

    Triangulo(double l1, double l2) : lado1(l1), lado2(l2) {
        hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    }

    Triangulo() : lado1(0), lado2(0), hipotenusa(0) {}

    double Area() const {
        return (lado1 * lado2) / 2;
    }

    double Perimetro() const {
        return lado1 + lado2 + hipotenusa;
    }

    void imprimirInfo() const {
        cout << "Resultados del Triangulo:" << endl;
        cout << "Lado 1: " << lado1 << endl;
        cout << "Lado 2: " << lado2 << endl;
        cout << "Hipotenusa: " << hipotenusa << endl;
        cout << "Area: " << Area() << endl;
        cout << "Perimetro: " << Perimetro() << endl;
        cout << "-------------------------" << endl;
    }

    void setLados(double l1, double l2) {
        lado1 = l1;
        lado2 = l2;
        hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    }
};

int main() {
   
    Triangulo triangulo1;
    Triangulo triangulo2;

    int opcion;
    system("cls");
    do {
        cout << "\n*** bienvenidos :D ***" << endl;
        cout << "1. Ingresar datos para el Triangulo 1" << endl;
        cout << "2. Ingresar datos para el Triangulo 2" << endl;
        cout << "3. Mostrar resultados de los triangulos" << endl;
        cout << "4. Salir >.<" << endl;
        cout << "Elija 1 :p no 2 pls ";
        cin >> opcion;

        switch (opcion) {
        case 1: {

            double lado1_1, lado2_1;
            cout << "Ingrese el cateto del primer triangulo: ";
            cin >> lado1_1;
            cout << "Ingrese el adyacente del primer triangulo: ";
            cin >> lado2_1;
            triangulo1.setLados(lado1_1, lado2_1);
            break;
        }
        case 2: {

            double lado1_2, lado2_2;
            cout << "Ingrese el cateto del segundo triangulo: ";
            cin >> lado1_2;
            cout << "Ingrese el adyacente del segundo triangulo: ";
            cin >> lado2_2;
            triangulo2.setLados(lado1_2, lado2_2);
            break;
        }
        case 3:

            triangulo1.imprimirInfo();
            triangulo2.imprimirInfo();
            break;
        default:
            cout << "del 1-4 " << endl;
        }

    } while (opcion != 4);

    return 0;
}