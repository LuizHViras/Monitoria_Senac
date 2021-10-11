//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex05.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdlib.h>

//[]-------------------------------------------------------------[]
//   Funcao: proximo10()
//   Entrada: inteiros a, b   
//   Saida: devolve o valor mais proximo de 10,
//          devolve 0 em caso de empate.
//[]-------------------------------------------------------------[]
int proximo10(int a, int b){
  int diferenca_a=abs(10-a);
	int diferenca_b=abs(10-b);
	if (diferenca_a>diferenca_b) return b;
	else if (diferenca_b>diferenca_a) return a;
	else return 0;
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
    return testar(proximo10(8, 13), 8);
}

float caso_de_teste02(){
    return testar(proximo10(13, 8), 8);
}

float caso_de_teste03(){
    return testar(proximo10(13, 7), 0);
}

float caso_de_teste04(){
    return testar(proximo10(7, 13), 0);
}

float caso_de_teste05(){
    return testar(proximo10(9, 13), 9);
}

float caso_de_teste06(){
    return testar(proximo10(10, 12), 10);
}

float caso_de_teste07(){
    return testar(proximo10(11, 10), 10);
}

float caso_de_teste08(){
    return testar(proximo10(5, 21), 5);
}

float caso_de_teste09(){
    return testar(proximo10(0, 20), 0);
}

float caso_de_teste10(){
    return testar(proximo10(10, 10), 0);
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

   printf("exercicio 05\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
