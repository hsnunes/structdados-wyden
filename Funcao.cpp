#include <iostream>
#include <locale.h> // setLocale
#include <stdlib.h> // System
#include <string>   // Textos em geral

using namespace std;

// Criando uma função, para imprimir na tela ALo Mundo
// void imprimirMsg() {
//     cout <<"Alô Mundo!" << endl;
// }

// Declarando a função para boas práticas, quando ela está abaixc do main
// Função que não retorna nada
void imprimirMsg();
// Fn que retorna um float
float calculaImposto();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float res;

    imprimirMsg();

    // Recebendo o resultado da Fn, na variavel res
    res = calculaImposto();

    cout <<"O Desconto do Imposto foi: " << res << endl;

    system("pause");
    return 0;
}

// Criando uma função, para imprimir na tela ALo Mundo
void imprimirMsg() {
    cout <<"Alô Mundo!" << endl;
}

float calculaImposto()
{
    float salario;
    float valImposto;

    salario = 2824;

    // Calculo de 10%
    valImposto = salario * 0.1;

    return valImposto;
}