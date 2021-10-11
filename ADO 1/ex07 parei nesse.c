//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: maximo_entre_10_20()
//   Entrada: inteiros a e b  
//   Saida: devolve o maior valor que esta no maximo_entre_10_20 10..20 
//          inclusive, ou retorne 0 se nenhum estiver nesse 
//          maximo_entre_10_20.
//[]-------------------------------------------------------------[]
int maximo_entre_10_20(int a, int b){
  // escreva seu codigo aqui ...
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
    return testar(maximo_entre_10_20(11,19), 19);
}

float caso_de_teste02(){
    return testar(maximo_entre_10_20(19,11), 19);
}

float caso_de_teste03(){
    return testar(maximo_entre_10_20(11,9), 11);
}

float caso_de_teste04(){
    return testar(maximo_entre_10_20(9,21), 0);
}

float caso_de_teste05(){
    return testar(maximo_entre_10_20(10,21), 10);
}

float caso_de_teste06(){
    return testar(maximo_entre_10_20(21,10), 10);
}

float caso_de_teste07(){
    return testar(maximo_entre_10_20(9,11), 11);
}

float caso_de_teste08(){
    return testar(maximo_entre_10_20(23,10), 10);
}

float caso_de_teste09(){
    return testar(maximo_entre_10_20(20, 10), 20);
}

float caso_de_teste10(){
    return testar(maximo_entre_10_20(7, 20), 20);
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
