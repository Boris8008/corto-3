#include <iostream>

using namespace std;

int main (void)
{
    //PROCESO
    float hora, extra, total, real;
    float afp = 0.0625;
    float seguro = 0.04;
    float renta = 0.1;
    int Nempleados, contador = 1;

    cout << endl;
    cout << "CALCULO DE SALARIO BASANDOSE EN LAS HORAS DE TRABAJO" << endl << endl;

    cout << "Digite el numero de empleados: ";
        cin >> Nempleados;
    do
    {
        contador++;
        cout << endl;
        cout << "Ingrese las horas trabajadas: ";
        cin >> hora;
        cout << "Ingrese las horas extras trabajadas: ";
        cin >> extra;
        total = (hora * 1.75) + (extra * 2.50);
       
        if (total > 500)
        {
            real = (total-((total * afp)+(total * seguro)+(total * renta)));
        } else {
            real = total-((total * afp)+(total * seguro));
        }
         cout << "El salario total es de: " << total << "$" << endl;
         cout << "El salario real es de: " << real << "$" << endl;

    } while (contador <= Nempleados);

    return 0;
}