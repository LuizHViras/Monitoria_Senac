//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    

#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: soma_dobro()
//   Entrada: inteiros a e b
//   Saída: devolve a soma entre a e b, 
//          porem se os numeros forem iguais
//          devolve o dobro da soma
//[]-------------------------------------------------------------[]
int soma_dobro(int a, int b){
   int s=0;

   if (a==b) s=(a+b)*2;
   else s=a+b;
	
   return s;
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
   return testar(soma_dobro(1, 2), 3);
}

float caso_de_teste02(){
    return testar(soma_dobro(3, 2), 5);
}

float caso_de_teste03(){
    return testar(soma_dobro(2, 2), 8);
}

float caso_de_teste04(){
    return testar(soma_dobro(-1, 0), -1);
}

float caso_de_teste05(){
    return testar(soma_dobro(0, 0), 0);
}

float caso_de_teste06(){
    return testar(soma_dobro(0, 1), 1);
}

float caso_de_teste07(){
    return testar(soma_dobro(3, 3), 12);
}

float caso_de_teste08(){
    return testar(soma_dobro(3, 4), 7);
}

float caso_de_teste09(){
    return testar(soma_dobro(4, 5), 9);
}

float caso_de_teste10(){
    return testar(soma_dobro(5, 5), 20);
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

    printf("exercicio 01\n");
    printf("sua nota foi: %.2f\n", r/10.0);
    return 0;
}
