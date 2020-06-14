#include <iostream>

using namespace std;

int main (void)
{
    //PROCESO
    int z;
    
    cout << endl;

    cout << "PROGRAMA QUE INDICA SI ES A"<<char(165)<<"O BISIESTO O NO" << endl << endl;

    cout << "Por favor ingrese el a"<<char(-92)<<"o: ";
    cin >> z;

    if (z % 4 != 0) cout << "El a"<<char(-92)<<"o no es bisiesto";
    else if (z % 100 != 0) cout << "El a"<<char(-92)<<"o si es bisiesto";
    else if (z % 400 != 0) cout << "El a"<<char(-92)<<"o no es bisiesto";
    else cout << "El a"<<char(-92)<<"o si es bisiesto";

    return 0;

}