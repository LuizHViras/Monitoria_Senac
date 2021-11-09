//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex03.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: sem_triplas()
//   Entrada: vetor v de inteiros e o tamanho n. 
//   Saida: Dizemos que uma tripla eh um valor que aparece
//          3 vezes seguidas no vetor. 
//          Devolve true se o vetor nao contiver tripla.
//          E false caso contrario.
//[]-------------------------------------------------------------[]
bool sem_triplas(int v[], int n){
  // escreva seu codigo aqui ...	
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
    return testar(sem_triplas(v, 5), true);
}

float caso_de_teste02(){
    int v[6] = {1,1,2,2,2,1};
    return testar(sem_triplas(v, 6), false);
}

float caso_de_teste03(){
    int v[7] = {1,1,1,2,2,2,1};
    return testar(sem_triplas(v, 7), false);
}

float caso_de_teste04(){
    int v[7] = {1,1,2,2,1,2,1};
    return testar(sem_triplas(v, 7), true);
}

float caso_de_teste05(){
    int v[3] = {1,2,1};
    return testar(sem_triplas(v, 3), true);
}

float caso_de_teste06(){
    int v[3] = {1,1,1};
    return testar(sem_triplas(v, 3),false);
}

float caso_de_teste07(){
    int v[2] = {1,1};
    return testar(sem_triplas(v, 2), true);
}

float caso_de_teste08(){
    int v[2] = {5,5};
    return testar(sem_triplas(v, 2), true);
}

float caso_de_teste09(){
    int v[1] = {2};
    return testar(sem_triplas(v, 1), true);
}

float caso_de_teste10(){
    int v[1] = {9};
    return testar(sem_triplas(v, 1), true);
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

    printf("exercicio 03\n");
    printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
