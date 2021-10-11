//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex09.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: conta9()
//   Entrada: vetor de inteiros v e o tamanho n  
//   Saida: devolve o numero de vezes que ocorre o  
//          numero 9.
//[]-------------------------------------------------------------[]
int conta9(int v[], int n){
  // escreva seu codigo aqui...	
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
    int v[3] = {1, 2, 9}; 	
    return testar(conta9(v,3), 1);
}

float caso_de_teste02(){
    int v[3] = {1, 9, 9};
    return testar(conta9(v,3), 2);
}

float caso_de_teste03(){
    int v[5] = {1, 9, 9, 3, 9};
    return testar(conta9(v,5), 3);
}


float caso_de_teste04(){
    int v[3] = {1, 2, 3};
    return testar(conta9(v,3), 0);
}

float caso_de_teste05(){
    int v[3] = {0};
    return testar(conta9(v,0), 0);
}

float caso_de_teste06(){
    int v[5] = {4, 2, 4, 3, 1};
    return testar(conta9(v,5), 0);
}

float caso_de_teste07(){
    int v[5] = {9, 2, 4, 3, 1};
    return testar(conta9(v,5), 1);
}

float caso_de_teste08(){
    int v[3] = {9, 9, 9};
    return testar(conta9(v,3), 3);
}

float caso_de_teste09(){
    int v[3] = {0, 0, 9};
    return testar(conta9(v,3), 1);
}

float caso_de_teste10(){
    int v[3] = {1, 9, 1};
    return testar(conta9(v,3), 1);
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

   printf("exercicio 09\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
