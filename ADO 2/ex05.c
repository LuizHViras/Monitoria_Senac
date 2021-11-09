//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex05.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: primeiro_ultimo_iguais()
//   Entrada: vetor v de inteiros e o tamanho n. 
//   Saida: devolve true se o tamanho do vetor eh
//          maior ou igual a 1, e o primeiro e o 
//          ultimo elemento do vetor sao iguais.
//          E false caso contrario.
//[]-------------------------------------------------------------[]
bool primeiro_ultimo_iguais(int v[], int n){
  // escreva seu codigo aqui...	
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
   int v[5] = {1,1,2,2,1};

   return testar(primeiro_ultimo_iguais(v, 5), true);
}

float caso_de_teste02(){
   int v[6] = {1,1,6,2,2,6};

   return testar(primeiro_ultimo_iguais(v, 6), false);
}

float caso_de_teste03(){
   int v[7] = {1,1,1,2,2,2,1};

   return testar(primeiro_ultimo_iguais(v, 7), true);
}

float caso_de_teste04(){
   int v[7] = {2,1,2,2,1,2,1};

   return testar(primeiro_ultimo_iguais(v, 7), false);
}

float caso_de_teste05(){
    int v[3] = {1,2,1};

   return testar(primeiro_ultimo_iguais(v, 3), true);
}

float caso_de_teste06(){
   int v[3] = {1,6,2};

   return testar(primeiro_ultimo_iguais(v, 3),false);
}

float caso_de_teste07(){
   int v[2] = {1,1};

   return testar(primeiro_ultimo_iguais(v, 2), true);
}

float caso_de_teste08(){
   int v[2] = {5,1};

   return testar(primeiro_ultimo_iguais(v, 2), false);
}

float caso_de_teste09(){
   int v[1] = {6};

   return testar(primeiro_ultimo_iguais(v, 1), true);
}

float caso_de_teste10(){
   int v[1] = {0};

   return testar(primeiro_ultimo_iguais(v, 0), false);
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
