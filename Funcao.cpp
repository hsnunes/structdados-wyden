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

int soma(int vlr1, int vlr2);

int vlrALterado(int& vlrALt);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int val = 35;
    cout <<"Valor de Val inicial na memoria: " << val << endl << endl;

    vlrALterado(val);

    cout <<"Valor alterado por endereço na memoria, não apenas valor: " << val << endl << endl;;

    // float res;

    // int result;

    // result = soma(15, 20);

    // cout <<"A soma resultou: " << result << endl;

    // imprimirMsg();

    // Recebendo o resultado da Fn, na variavel res
    // res = calculaImposto();

    // cout <<"O Desconto do Imposto foi: " << res << endl;

    system("pause");
    return 0;
}

int vlrALterado(int& vlrALt)
{
    vlrALt = 120;
    return vlrALt;
}

// Função com parametros
int soma(int vlr1, int vlr2)
{
    int total;

    total = vlr1 + vlr2;

    return total;

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