#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (void)
{
    int numero, DatoNumeroAleatorio, contador = 5;
    srand (time(NULL));// NUMEROS ALEATORIOS 

    DatoNumeroAleatorio = 1 + rand() % (100);
    //PROCESO

    cout << endl;
    cout << "NUMERO MAGICO!!"<< endl << endl;
    cout << "ingrese 0 si quiere salir..."<< endl << endl;
    do{ 
        contador--;
         cout << "Adivina el numero magico: ";
         cin >> numero;
        if (numero == 0) {
            contador = 0;
         } else if (numero > DatoNumeroAleatorio){
             cout << "Numero incorrecto!!, Ingrese un numero menor" << endl;
             cout << "Le quedan " << contador << " intentos" << endl;
         } else if (numero < DatoNumeroAleatorio) {
            cout << "Numero incorrecto!!, Ingrese un numero mayor" << endl;
            cout << "Le quedan " << contador << " intentos" << endl;
         } else {
            cout << "FELICIDADES!! ADIVINO EL NUMERO MAGICO!!" << endl;
            contador = 0;
         }
    } while (contador > 0);

    cout << "Gracias por participar!!" << endl;

    system ("pause");
    getch();
    return 0;
}