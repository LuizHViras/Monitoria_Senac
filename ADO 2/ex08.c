//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex08.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 

//[]-------------------------------------------------------------[]
//   Funcao: iguais()
//   Entrada: vetor de inteiros v1[] e o seu tamanho n1,
//            vetor de inteiros v2[] e o seu tamanho n2.
//   Saida: devolve true se são iguais e false
//          caso contrário.
//          Para que os dois vetores sejam considerados iguais
//          eles precisam ter: 
//          1. os mesmos tamanhos;
//          2. os mesmos elementos, independente das posições.
//   Considere vetores sem elementos repetidos.
//[]-------------------------------------------------------------[]
bool iguais(int v1[], int n1, int v2[], int n2){
   // escreva o seu codigo aqui ... 
   return false;
}


//[]-------------------------------------------------------------[]
//   Funcao: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saida: ok se obtido igual a esperado e nao ok caso contrario
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
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int v2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   
   return testar(iguais(v1, 10, v2, 10), true);
}

float caso_de_teste02(){
   int v1[10] = {2, 7, 6, 4, 5, 9, 8, 7, 10, 12};
   int v2[10] = {1, 2, 3, 4, 5, 6, 7, 8,  9, 10};
   
   return testar(iguais(v1, 10, v2, 10), false);
}  

float caso_de_teste03(){
   int v1[10] = {12, 15, 65, 45, 57, 91, 82,  7, 13, 14};
   int v2[10] = {14, 13,  7, 82, 91, 57, 45, 65, 15, 12};

   return testar(iguais(v1, 10, v2, 10), true);
}

float caso_de_teste04(){
   int v1[10] = {0, 3, 6, 10, 13, 14, 15, 4, 7, 9};
   int v2[9]  = {3, 6, 10, 13, 14, 15, 4, 7, 9};

   return testar(iguais(v1, 10, v2, 9), false);
}

float caso_de_teste05(){
   int v1[10] = {0, 3, 6, 10, 13, 14, 15, 4, 7, 9};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};

   return testar(iguais(v1, 10, v2, 10), false);
}

float caso_de_teste06(){
   int v1[10] = {1,   8,  7,  3,  2,  5,  4,  9,  6, 0};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};

   return testar(iguais(v1, 10, v2, 10), false);
}

float caso_de_teste07(){
   int v1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int v2[10] = { 1,  2,  3,  4,  5,  6,  7,  8,   9, 10};
   
   return testar(iguais(v1, 10, v2, 10), false);
}

float caso_de_teste08(){
   int v1[10] = {32,28,47,13,26,12,4,29,16,14};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};

   return testar(iguais(v1, 10, v2, 10), false);
}

float caso_de_teste09(){
   int v1[10] = {32,28,21,37,29,25,22,29,17,24};
   int v2[10] = {32,28,21,37,29,25,22,29,17,24};

   return testar(iguais(v1, 10, v2, 10), true);
}

float caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,39,46,32};
   int v2[10] = {41,18,47,27,29,35,26,39,46,32};

   return testar(iguais(v1, 10, v2, 10), false);
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

