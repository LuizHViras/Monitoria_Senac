//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex08.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

//[]-------------------------------------------------------------[]
//   Funcao: soma7()
//   Entrada: vetor v de números inteiros e seu tamanho.
//   Saida: soma de elementos do vetor que são múltiplos de 7 
//            ou que terminam com 7;
//[]-------------------------------------------------------------[]
int soma7(int v[], int n){
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
   int v[6] = {17,49,37,40,51,6};
   return testar(soma7(v, 6), 103);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,28,7,10,2};
   return testar(soma7(v, 10), 42);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(soma7(v, 10), 155);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,28,50,20,22};
   return testar(soma7(v, 7), 98);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,496,14,28};
   return testar(soma7(v, 6), 59);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   return testar(soma7(v, 10), 7);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   return testar(soma7(v, 10), 27);
}

float caso_de_teste08(){
   int v[10] = {6,28,496,8128,26,12,44,29,16,24};
   return testar(soma7(v, 10), 28);
}

float caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,6,24};
   return testar(soma7(v, 10), 86);
}

float caso_de_teste10(){
   int v[10] = {41,29,47,27,29,35,42,39,46,32};
   return testar(soma7(v, 10), 151);
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

    printf("exercicio 08\n");
    printf("sua nota foi: %.2f\n", r/10.0);
    return 0;
}
