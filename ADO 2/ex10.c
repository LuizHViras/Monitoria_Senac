//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex10.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdlib.h>

//[]-------------------------------------------------------------[]
//   Funcao: soma3()
//   Entrada: vetor de inteiros v de tamanho igual a 3   
//   Saida: devolve a soma dos elementos do vetor
//[]-------------------------------------------------------------[]
int soma3(int v[3]){
   // escreva o seu codigo aqui ...	
   return 0;
}


//[]-------------------------------------------------------------[]
//   Funcao: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saida: ok se obtido igual a esperado e nao ok caso contrario
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
   int v[3] = {1,2,3};
   return testar(soma3(v), 6);
}

float caso_de_teste02(){
   int v[3] = {5, 11, 2};	
   return testar(soma3(v), 18);
}

float caso_de_teste03(){
   int v[3] = {7,0,0};	
   return testar(soma3(v), 7);
}

float caso_de_teste04(){
   int v[3] = {1,2,1};	
   return testar(soma3(v), 4);
}

float caso_de_teste05(){
   int v[3] = {1,1,1};	
   return testar(soma3(v), 3);
}

float caso_de_teste06(){
   int v[3] = {2,3,5};	
   return testar(soma3(v), 10);
}

float caso_de_teste07(){
   int v[3] = {2,7,2};	
   return testar(soma3(v), 11);
}

float caso_de_teste08(){
   int v[3] = {4,5,6};	
   return testar(soma3(v), 15);
}

float caso_de_teste09(){
   int v[3] = {2,4,6};	
   return testar(soma3(v), 12);
}

float caso_de_teste10(){
   int v[3] = {3,6,9};	
   return testar(soma3(v), 18);
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
