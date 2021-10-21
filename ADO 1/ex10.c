//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex10.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: primeiros_elementos()
//   Entrada: vetor v de inteiros e o tamanho n. 
//   Saida: devolve true um dos primeiros quatro elementos
//          do vetor eh o numero 9.
//[]-------------------------------------------------------------[]
bool primeiros_elementos(int v[], int n){
		for(int cont=0; cont<n && cont<4; cont++) {
			if(v[cont]==9) return true;
		}
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
   int v[5] = {1,2,9,3,4};
   return testar(primeiros_elementos(v, 5), true);
}

float caso_de_teste02(){
    int v[5] = {1,2,3,4,9};
    return testar(primeiros_elementos(v, 5), false);
}

float caso_de_teste03(){
    int v[5] = {1,2,3,4,5};
    return testar(primeiros_elementos(v, 5), false);
}

float caso_de_teste04(){
    int v[3] = {9,2,3};
    return testar(primeiros_elementos(v, 3), true);
}

float caso_de_teste05(){
    int v[3] = {1,9,9};
    return testar(primeiros_elementos(v, 3), true);
}

float caso_de_teste06(){
    int v[3] = {1,2,3};
    return testar(primeiros_elementos(v, 3),false);
}

float caso_de_teste07(){
    int v[2] = {1,9};
    return testar(primeiros_elementos(v, 2), true);
}

float caso_de_teste08(){
    int v[2] = {5,5};
    return testar(primeiros_elementos(v, 2), false);
}

float caso_de_teste09(){
    int v[1] = {2};
    return testar(primeiros_elementos(v, 1), false);
}

float caso_de_teste10(){
    int v[1] = {9};
    return testar(primeiros_elementos(v, 1), true);
}



//[]-------------------------------------------------------------[]
//    Casos de testes
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
