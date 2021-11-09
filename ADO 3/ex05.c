//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex05.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: troca_primeiro_com_ultimo()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída:   troque o primeiro elemento com o ultimo elemento
//            do vetor.
//[]-------------------------------------------------------------[]
void troca_primeiro_com_ultimo(int v[], int n){
   // escreva o seu codigo aqui ...
    
}

//[]-------------------------------------------------------------[]
//   Função: compare_vetor()
//   Entrada: dois vetores v1 e v2, um inteiro n
//   Saída: devolve true se v1 igual a v2, e false caso contrario
//[]-------------------------------------------------------------[]
bool compare_vetor(int v1[], int v2[], int n){
   for (int i = 0; i < n; i++){
      if (v1[i] != v2[i])
         return false;
   }
   return true;
}

//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(bool obtido, bool esperado){
   float resultado;
   if (obtido == esperado){
       printf("Parabens !!!");
       resultado = 1.0;
   } else {
       printf("Ainda nao !!!");
       resultado = 0.0;
   }
   printf(" obtido: %s  esperado: %s\n", btoa(obtido), btoa(esperado));
   return resultado;
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int v1[6] = {1,2,3,4,5,6};
   int v2[6] = {6,2,3,4,5,1};
   troca_primeiro_com_ultimo(v1, 6);

   return testar(compare_vetor(v1, v2, 6), true);
}

float caso_de_teste02(){
   int v1[10] = {2,7,6,4,5,9,8,7,10,2};
   int v2[10] = {2,7,6,4,5,9,8,7,10,2};
   troca_primeiro_com_ultimo(v1, 10);

   return testar(compare_vetor(v1, v2, 10), true);
}

float caso_de_teste03(){
   int v1[10] = {12,15,65,45,57,91,82,7,13,12};
   int v2[10] = {12,15,65,45,57,91,82,7,13,12};
   troca_primeiro_com_ultimo(v1, 10);

   return testar(compare_vetor(v1, v2, 10), true);
}

float caso_de_teste04(){
   int v1[7] = {21,20,49,8,57,20,1};
   int v2[7] = {1,20,49,8,57,20,21};
   troca_primeiro_com_ultimo(v1, 7);

   return testar(compare_vetor(v1, v2, 7), true);
}

float caso_de_teste05(){
   int v1[6] = {17,2,15,4,14,18};
   int v2[6] = {18,2,15,4,14,17};
   troca_primeiro_com_ultimo(v1, 6);

   return testar(compare_vetor(v1, v2, 6), true);
}

float caso_de_teste06(){
   int v1[10] = {10,8,7,3,2,5,4,9,6,0};
   int v2[10] = {0,8,7,3,2,5,4,9,6,10};
   troca_primeiro_com_ultimo(v1, 10);

   return testar(compare_vetor(v1, v2, 10), true);
}

float caso_de_teste07(){
   int v1[10] = {2,18,27,33,2,15,24,19,26,30};
   int v2[10] = {30,18,27,33,2,15,24,19,26,2};
   troca_primeiro_com_ultimo(v1, 10);

   return testar(compare_vetor(v1, v2, 10), true);
}

float caso_de_teste08(){
   int v1[10] = {32,28,47,13,26,12,4,29,16,14};
   int v2[10] = {14,28,47,13,26,12,4,29,16,32};
   troca_primeiro_com_ultimo(v1, 10);

   return testar(compare_vetor(v1, v2, 10), true);
}

float caso_de_teste09(){
   int v1[10] = {32,28,21,37,29,25,22,29,17,24};
   int v2[10] = {24,28,21,37,29,25,22,29,17,32};
   troca_primeiro_com_ultimo(v1, 10);

   return testar(compare_vetor(v1, v2, 10), true);
}

float caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,79,46,32};
   int v2[10] = {32,28,47,27,29,35,26,79,46,41};
   troca_primeiro_com_ultimo(v1, 10);

   return testar(compare_vetor(v1, v2, 10), true);
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

    printf("exercicio 05\n");
    printf("sua nota foi: %.2f\n", r/10.0);
    return 0;
}
