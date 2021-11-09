//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex10.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

//[]-------------------------------------------------------------[]
//   Em estatística a moda representa o valor mais frequente de um 
//   conjunto de dados, sendo assim, para defini-la basta observar 
//   a frequência com que os valores aparecem
//
//   Funcao: moda()
//   Entrada: vetor v de números inteiros e seu tamanho.
//   Saida: Devolva a moda, caso haja empate entre dois ou mais
//          elementos, devolva o menor.
//[]-------------------------------------------------------------[]
int moda(int v[], int n){
   // escreva o seu codigo aqui ...
   return 0;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado;
   if (obtido == esperado){
       printf("Parabens !!!");
       resultado = 1.0;
   } else {
       printf("Ainda nao !!!");
       resultado = 0.0;
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int v[6] = {17,49,37,49,51,6};
   return testar(moda(v, 6), 49);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,2,7,10,2};
   return testar(moda(v, 10), 2);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,12,91,82,7,13,12};
   return testar(moda(v, 10), 12);
}

float caso_de_teste04(){
   int v[7] = {21,20,21,28,50,20,22};
   return testar(moda(v, 7), 20);
}

float caso_de_teste05(){
   int v[6] = {3,2,3,2,3,2};
   return testar(moda(v, 6), 2);
}

float caso_de_teste06(){
   int v[10] = {1,4,7,3,2,5,4,9,6,3};
   return testar(moda(v, 10), 3);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,2,19,26,36};
   return testar(moda(v, 10), 2);
}

float caso_de_teste08(){
   int v[10] = {6,28,496,8128,26,12,44,29,16,24};
   return testar(moda(v, 10), 6);
}

float caso_de_teste09(){
   int v[10] = {24,29,21,21,29,25,22,29,22,24};
   return testar(moda(v, 10), 29);
}

float caso_de_teste10(){
   int v[10] = {41,29,47,27,29,35,42,39,46,32};
   return testar(moda(v, 10), 29);
}

//[]-------------------------------------------------------------[]
//    programa principal
//[]-------------------------------------------------------------[]
int main(){
    float r = 0.0;
    r += caso_de_teste01();
    r += caso_de_teste02();
    r += caso_de_teste03();
    r += caso_de_teste04();
    r += caso_de_teste05();
    r += caso_de_teste06();
    r += caso_de_teste07();
    r += caso_de_teste08();
    r += caso_de_teste09();
    r += caso_de_teste10();

    printf("exercicio 10\n");
    printf("sua nota foi: %.2f\n", r/10.0);
    return 0;
}
