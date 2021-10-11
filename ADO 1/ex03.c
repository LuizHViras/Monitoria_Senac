//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex03.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: dez()
//   Entrada: inteiros a e b  
//   Saida: devolve true se um dos dois e 10 ou 
//          a soma e dez
//[]-------------------------------------------------------------[]
bool dez(int a, int b){
   if (a=10 || b=10 || a+b==10) return true;
   else return false;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
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
    return testar(dez(9,10), true);
}

float caso_de_teste02(){
    return testar(dez(9,9), false);
}

float caso_de_teste03(){
    return testar(dez(1,9), true);
}

float caso_de_teste04(){
    return testar(dez(10, 1), true);
}

float caso_de_teste05(){
    return testar(dez(10,10), true);
}

float caso_de_teste06(){
    return testar(dez(8,2), true);
}

float caso_de_teste07(){
    return testar(dez(8,3), false);
}

float caso_de_teste08(){
    return testar(dez(10,42), true);
}

float caso_de_teste09(){
    return testar(dez(10, 42), true);
}

float caso_de_teste10(){
    return testar(dez(12, -2), true);
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
