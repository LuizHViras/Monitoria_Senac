//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: intMax()
//   Entrada: inteiros a, b e c  
//   Saida: devolve o maior valor 
//[]-------------------------------------------------------------[]
int intMax(int a, int b, int c){
   if (a>b && a>c) return a;
   else if (b>a && b>c) return b;
   else return c;
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
    return testar(intMax(1, 2, 3), 3);
}

float caso_de_teste02(){
    return testar(intMax(1, 3, 2), 3);
}

float caso_de_teste03(){
    return testar(intMax(3, 2, 1), 3);
}

float caso_de_teste04(){
    return testar(intMax(9, 3, 3), 9);
}

float caso_de_teste05(){
    return testar(intMax(3, 9, 3), 9);
}

float caso_de_teste06(){
    return testar(intMax(8, 2, 3), 8);
}

float caso_de_teste07(){
    return testar(intMax(-3, -2, -1), -1);
}

float caso_de_teste08(){
    return testar(intMax(6, 2, 5), 6);
}

float caso_de_teste09(){
    return testar(intMax(5, 6, 2), 6);
}

float caso_de_teste10(){
    return testar(intMax(5, 2, 6), 6);
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
