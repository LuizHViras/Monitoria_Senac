//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: intervalo()
//   Entrada: inteiros a e b  
//   Saida: devolve true ambos estao no intervalo 30..40 inclusive,
//          ou ambos estao no intervalor 40..50 inclusive.
//[]-------------------------------------------------------------[]
bool intervalo(int a, int b){
   if (a>=30 && b>=30 && a<=40 && b<=40) return true;
   else if(a>=40 && b>=40 && a<=50 && b<=50) return true;
   else return false;
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
    return testar(intervalo(30,31), true);
}

float caso_de_teste02(){
    return testar(intervalo(30,41), false);
}

float caso_de_teste03(){
    return testar(intervalo(40,50), true);
}

float caso_de_teste04(){
    return testar(intervalo(40, 51), false);
}

float caso_de_teste05(){
    return testar(intervalo(39,50), false);
}

float caso_de_teste06(){
    return testar(intervalo(50,39), false);
}

float caso_de_teste07(){
    return testar(intervalo(40,39), true);
}

float caso_de_teste08(){
    return testar(intervalo(49,48), true);
}

float caso_de_teste09(){
    return testar(intervalo(50, 40), true);
}

float caso_de_teste10(){
    return testar(intervalo(50, 51), false);
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
