//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: diferenca21()
//   Entrada: inteiro n 
//   Saida: devolve a diferenca absoluta entre n e 21 
//          se n for maior que 21 devolve o dobro da
//          diferenca absoluta
//  Exemplo:        
//          diferenca21(19) -> 2
//          diferenca21(25) -> 8
//  dica: abs(x) devolve o valor absoluto de x
//[]-------------------------------------------------------------[]
int diferenca21(int n){
   if (n>21) return (n-21)*2;	
   else return 21-n;
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
    return testar(diferenca21(19), 2);
}

float caso_de_teste02(){
    return testar(diferenca21(10), 11);
}

float caso_de_teste03(){
    return testar(diferenca21(21), 0);
}

float caso_de_teste04(){
    return testar(diferenca21(22), 2);
}

float caso_de_teste05(){
    return testar(diferenca21(25), 8);
}

float caso_de_teste06(){
    return testar(diferenca21(30), 18);
}

float caso_de_teste07(){
    return testar(diferenca21(3), 18);
}

float caso_de_teste08(){
    return testar(diferenca21(5), 16);
}

float caso_de_teste09(){
    return testar(diferenca21(1), 20);
}

float caso_de_teste10(){
    return testar(diferenca21(42), 42);
}



//[]-------------------------------------------------------------[]
//   programa principal
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

   printf("exercicio 02\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
