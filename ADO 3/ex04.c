//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Funcao: maior_multiplo_de_x()
//   Entrada: vetor de inteiros v[] e o seu tamanho n, e inteiro x
//   Saida:   devolve o maior elemento do vetor que
//            é multiplo de x.
//[]-------------------------------------------------------------[]
int maior_multiplo_de_x(int v[], int n, int x){
  int maior_elemento=0;
	// Loop que percorre todo o vetor
	for(int i=0; i<n; i++){
		/* Se o resto da divisão do elemento do vetor por "x" for igual a "0", ele é múltiplo de "x"
		 * Se o elemento do vetor for maior que o armazenado em maior_elemento, ele será o novo valor de maior_elemento */
		if(v[i]%x == 0 && v[i]>maior_elemento) maior_elemento= v[i];
	}
	return maior_elemento;
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
   int v[6] = {1,2,3,4,5,6};
   return testar(maior_multiplo_de_x(v, 6, 2), 6);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,2};
   return testar(maior_multiplo_de_x(v, 10, 3), 9);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(maior_multiplo_de_x(v, 10, 5), 65);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   return testar(maior_multiplo_de_x(v, 7, 4), 28);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   return testar(maior_multiplo_de_x(v, 6, 6), 18);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   return testar(maior_multiplo_de_x(v, 10, 8), 8);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   return testar(maior_multiplo_de_x(v, 10, 9), 36);
}

float caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,24};
   return testar(maior_multiplo_de_x(v, 10, 12), 24);
}

float caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,17,24};
   return testar(maior_multiplo_de_x(v, 10, 11), 33);
}

float caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,42,39,46,32};
   return testar(maior_multiplo_de_x(v, 10, 14), 42);
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
