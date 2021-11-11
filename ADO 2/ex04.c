//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: primeiro_ultimo_6()
//   Entrada: vetor v de inteiros e o tamanho n. 
//   Saida: devolve true se o numero 6 aparece ou
//          como o primeiro elemento ou como o ultimo
//          elemento do vetor.
//          E false caso contrario.
//[]-------------------------------------------------------------[]
bool primeiro_ultimo_6(int v[], int n){
  /* Se o primeiro elemento ou o último elemento forem iguais a "6" retorne true
	 * Lembre-se, o último elemento do vetor é o seu tamanho - 1 */
	if (v[0]==6 || v[n-1]==6) return true;
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
   int v[5] = {1,1,2,2,6};

   return testar(primeiro_ultimo_6(v, 5), true);
}

float caso_de_teste02(){
   int v[6] = {1,1,6,2,2,1};

   return testar(primeiro_ultimo_6(v, 6), false);
}

float caso_de_teste03(){
   int v[7] = {6,1,1,2,2,2,1};

   return testar(primeiro_ultimo_6(v, 7), true);
}

float caso_de_teste04(){
   int v[7] = {1,1,2,2,1,2,1};

   return testar(primeiro_ultimo_6(v, 7), false);
}

float caso_de_teste05(){
    int v[3] = {1,2,6};

   return testar(primeiro_ultimo_6(v, 3), true);
}

float caso_de_teste06(){
   int v[3] = {1,6,1};

   return testar(primeiro_ultimo_6(v, 3),false);
}

float caso_de_teste07(){
   int v[2] = {1,6};

   return testar(primeiro_ultimo_6(v, 2), true);
}

float caso_de_teste08(){
   int v[2] = {5,5};

   return testar(primeiro_ultimo_6(v, 2), false);
}

float caso_de_teste09(){
   int v[1] = {6};

   return testar(primeiro_ultimo_6(v, 1), true);
}

float caso_de_teste10(){
   int v[1] = {9};

   return testar(primeiro_ultimo_6(v, 1), false);
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

   printf("exercicio 04\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
