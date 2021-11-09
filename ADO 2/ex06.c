//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 

//[]-------------------------------------------------------------[]
//   Funcao: primeiro_ultimo_iguais()
//   Entrada: vetor v1 de inteiros e o tamanho n1,
//            vetor v2 de inteiros e o tamanho n2. 
//   Saida: devolve true se os primeiros
//          elementos dos vetores sao iguais ou 
//          os ultimos elementos dos vetores sao iguais.
//          Ambos vetores tem tamanho maior ou iguais a 1.
//          E false caso contrario.
//[]-------------------------------------------------------------[]
bool primeiro_ultimo_iguais(int v1[], int n1, int v2[], int n2){
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
   int v1[5] = {1,1,2,2,1};
   int v2[1] = {1};

   return testar(primeiro_ultimo_iguais(v1, 5, v2, 1), true);
}

float caso_de_teste02(){
   int v1[6] = {1,1,6,2,2,6};
   int v2[3] = {2,3,4};

   return testar(primeiro_ultimo_iguais(v1, 6, v2, 3), false);
}

float caso_de_teste03(){
   int v1[7] = {1,1,1,2,2,2,3};
   int v2[2] = {7,3};

   return testar(primeiro_ultimo_iguais(v1, 7, v2, 2), true);
}

float caso_de_teste04(){
   int v1[7] = {2,1,2,2,1,2,1};
   int v2[3] = {7,4,3};
   return testar(primeiro_ultimo_iguais(v1, 7, v2, 3), false);
}

float caso_de_teste05(){
   int v1[3] = {1,2,3};
   int v2[2] = {1,3};

   return testar(primeiro_ultimo_iguais(v1, 3, v2, 2), true);
}

float caso_de_teste06(){
   int v1[3] = {1,6,2};
   int v2[1] = {6};

   return testar(primeiro_ultimo_iguais(v1, 3, v2, 1),false);
}

float caso_de_teste07(){
   int v1[2] = {1,1};
   int v2[3] = {1,2,3};
   return testar(primeiro_ultimo_iguais(v1, 2, v2, 3), true);
}

float caso_de_teste08(){
   int v1[2] = {5,1};
   int v2[2] = {1,5};

   return testar(primeiro_ultimo_iguais(v1, 2, v2, 2), false);
}

float caso_de_teste09(){
   int v1[1] = {6};
   int v2[2] = {6,6};
   return testar(primeiro_ultimo_iguais(v1, 1, v2, 2), true);
}

float caso_de_teste10(){
   int v1[1] = {0};
   int v2[2] = {0,0};

   return testar(primeiro_ultimo_iguais(v1, 0, v2, 2), false);
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

   printf("exercicio 06\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
