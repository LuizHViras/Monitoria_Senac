//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

//[]-------------------------------------------------------------[]
//   Função: conta_numeros_palindromos()
//   Entrada: vetor de inteiros v[] e o seu tamanho n, e inteiro x
//   Saída:   devolve a quantidade de numeros palindromos.
//       Palindromos são numeros que podem ser lidos da
//       esquerda para a direita ou da direita para a esquerda
//       da mesma maneira.
//
//       ex.:  121, 313, 4, 55 ...
//[]-------------------------------------------------------------[]
int conta_numeros_palindromos(int v[], int n){
	int aux, reverso, qntd_palindromo=0;

	for(int i=0; i<n; i++){
		reverso = 0;

		for(aux = v[i]; aux != 0; aux = aux / 10) 
			reverso = reverso * 10 + aux % 10;

		if(reverso == v[i]) qntd_palindromo++;
	}

	return qntd_palindromo;
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
   int v[6] = {1,2,3,4,5,6};
   return testar(conta_numeros_palindromos(v, 6), 6);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,2};
   return testar(conta_numeros_palindromos(v, 10), 9);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(conta_numeros_palindromos(v, 10), 1);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   return testar(conta_numeros_palindromos(v, 7), 1);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   return testar(conta_numeros_palindromos(v, 6), 2);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   return testar(conta_numeros_palindromos(v, 10), 10);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   return testar(conta_numeros_palindromos(v, 10), 3);
}

float caso_de_teste08(){
   int v[10] = {313,28,47,13,26,12,44,29,16,24};
   return testar(conta_numeros_palindromos(v, 10), 2);
}

float caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,17,24};
   return testar(conta_numeros_palindromos(v, 10), 2);
}

float caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,42,39,46,32};
   return testar(conta_numeros_palindromos(v, 10), 0);
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