//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 

//[]-------------------------------------------------------------[]
//   Funcao: esta_em_ordem_crescente()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saida: devolve true se esta em ordem crescente e false
//          caso contrário
//[]-------------------------------------------------------------[]
bool esta_em_ordem_crescente(int v[], int n){
  /* Loop percorrendo o vetor inteiro
	 * O último elemento do vetor é o "/0", e por ser um valor nulo ele sempre será dará erro
	 * Portanto é necessário excluí-lo da consulta (i<n-1)
	 * Se o elemento da posição "i" for maior do que o da posição seguinte, retorne "false" */
	for(int i=0; i<n-1; i++) if(v[i]>v[i+1]) return false;
	return true;
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
   int v[6] = {1,2,3,4,5,6};
   return testar(esta_em_ordem_crescente(v, 6), true);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,12};
   return testar(esta_em_ordem_crescente(v, 10), false);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(esta_em_ordem_crescente(v, 10), false);
}

float caso_de_teste04(){
   int v[7] = {1,3,6,10,13,14,15};
   return testar(esta_em_ordem_crescente(v, 7), true);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   return testar(esta_em_ordem_crescente(v, 6), false);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,0};
   return testar(esta_em_ordem_crescente(v, 10), false);
}

float caso_de_teste07(){
   int v[10] = {10,20,30,40,50,60,70,80,90,100};
   return testar(esta_em_ordem_crescente(v, 10), true);
}

float caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,14};
   return testar(esta_em_ordem_crescente(v, 10), false);
}

float caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   return testar(esta_em_ordem_crescente(v, 10), false);
}

float caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   return testar(esta_em_ordem_crescente(v, 10), false);
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

   printf("exercicio 07\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
