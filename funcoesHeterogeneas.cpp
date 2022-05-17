#include <iostream>
#include <locale.h> // setLocale
#include <stdlib.h> // System
#include <string>   // Textos em geral

using namespace std;

struct Coordenadas
{
    int x, y, z;
};


int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Coordenadas pontoA;
    // Coordenadas pontoB;
    // Coordenadas pontoC;
    // Utilizando VETOR
    Coordenadas ponto[3];

    ponto[0].x = 1025;
    ponto[0].y = 2054;
    ponto[0].z = 50458;

    cout <<"- Coordenada PontoA -" << endl;
    cout <<"Coordenada x = " << ponto[0].x << endl;
    cout <<"Coordenada y = " << ponto[0].y << endl;
    cout <<"Coordenada z = " << ponto[0].z << endl << endl;

    ponto[1].x = 125;
    ponto[1].y = 943;
    ponto[1].z = 7851;

    cout <<"- Coordenada PontoB -" << endl;
    cout <<"Coordenada x = " << ponto[1].x << endl;
    cout <<"Coordenada y = " << ponto[1].y << endl;
    cout <<"Coordenada z = " << ponto[1].z << endl << endl;

    ponto[2].x = 154;
    ponto[2].y = 73;
    ponto[2].z = 946;

    cout <<"- Coordenada PontoC -" << endl;
    cout <<"Coordenada x = " << ponto[2].x << endl;
    cout <<"Coordenada y = " << ponto[2].y << endl;
    cout <<"Coordenada z = " << ponto[2].z << endl << endl;

    system("pause");
    return 0;
}
