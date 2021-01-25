#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int arregloPositivos[20], arregloNegativos[20], canIni = 0, positivos = 0, sumaPar = 0, negativos = 0, sumanegativos = 0, arregloNumeros[100];

    cout << "ingrese cuantos valores desea ingresar" << endl;
    cin >> canIni;

    for (int i = 0; i < canIni; i++)
    {
        cin >> arregloNumeros[i];
    }

    for (int i = 0; i < canIni; i++)
    {
        if (arregloNumeros[i] > 0)
        {

            arregloPositivos[positivos] = arregloNumeros[i];

            positivos++;
        }
        else if (arregloNumeros[i] < 0)
        {

            arregloNegativos[negativos] = arregloNumeros[i];
            negativos++;
        }
    }

    cout << "estos son los numeros positivos ingresados " << endl;
    for (int i = 0; i < positivos; i++)
    {
        cout << arregloPositivos[i] << "  ";
        sumaPar = sumaPar + arregloPositivos[i];
    }

    cout << "estos son los numeros negativos ingresados " << endl;
    for (int i = 0; i < negativos; i++)
    {
        cout << arregloNegativos[i] << "  ";
        sumanegativos = sumanegativos + arregloPositivos[i];
    }

    cout << "y esta es la sumaPar de esos numeros positivos " << sumaPar << " esta es la suma de los numeros negativos " << sumanegativos << "y esta es la suma de positivos e negativos" << (sumanegativos + sumaPar) << endl;
}
