# structdados-wyden
Estudos de Estruturas de Dados com C++
Disciplina 22-1 (2)


Funções

Bibliotecas

boas praticas de posicionamento das funcoes

Camel Case;

funções com parametros

Funções com passage de referencia na memoria da variavel

Struct Cria um ponto novo no programa
Ex:
    Criar um struct: 
        struct Coordenadas {
            int x, y, z;
        }

    Declaração:
        Coordenadas ponto;
        Coordenadas vira um tipo de dado.
Muito parecido com Objeto;

Criando um VETOR na sctruct

No caso das coordenadas, a repetição de codigo fica inviável
Utilizando um vetor, ganhamos mais mobilidade e mais recursos no programa
    Coordenadas ponto[3];
    Aí fariamos os 3 pontos, declarados ja aqui no vetor
    ponto[0].x = xx
    ponto[0].y = xx
    ponto[0].z = xx

Refatorando o codigo, criando funções para não utilizar repetições;
Criando uma função para imprimir os pontos;
E depois criar uma função para inputar os valores;
E assim, o programa ficar modular



***
Sempre que usar o cin >> , colocar uma cout <<'antes para informar o que será pedido"

***
BASE 0
BASE 1
C++ é base 0