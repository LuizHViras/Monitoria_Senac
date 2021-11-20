//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex09.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

//[]-------------------------------------------------------------[]
//   Funcao: maior_que_o_primeiro()
//   Entrada: vetor v de números inteiros e seu tamanho.
//   Saida: conte quantos elementos são maiores que o primeiro
//            elemento do vetor
//[]-------------------------------------------------------------[]
int maior_que_o_primeiro(int v[], int n){
	int cont=0;

	for(int i=0; i<n; i++)
		// Se o elemento do vetor for maior do que o primeiro elemento, aumente em "1" a variável "cont"
		if(v[i]>v[0]) cont++;
	return cont;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
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
   int v[6] = {17,49,37,40,51,6};
   return testar(maior_que_o_primeiro(v, 6), 4);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,28,7,10,2};
   return testar(maior_que_o_primeiro(v, 10), 8);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(maior_que_o_primeiro(v, 10), 7);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,28,50,20,22};
   return testar(maior_que_o_primeiro(v, 7), 4);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,496,14,28};
   return testar(maior_que_o_primeiro(v, 6), 2);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   return testar(maior_que_o_primeiro(v, 10), 9);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   return testar(maior_que_o_primeiro(v, 10), 8);
}

float caso_de_teste08(){
   int v[10] = {6,28,496,8128,26,12,44,29,16,24};
   return testar(maior_que_o_primeiro(v, 10), 9);
}

float caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,6,24};
   return testar(maior_que_o_primeiro(v, 10), 1);
}

float caso_de_teste10(){
   int v[10] = {41,29,47,27,29,35,42,39,46,32};
   return testar(maior_que_o_primeiro(v, 10), 3);
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
