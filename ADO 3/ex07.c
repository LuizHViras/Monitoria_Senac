//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

//[]-------------------------------------------------------------[]
//   Funcao: conta_numeros_perfeitos()
//   Entrada: vetor de inteiros v[] e o seu tamanho n, e inteiro x
//   Saida:   devolve a quantidade de numeros perfeitos.
//       Numero perfeito eh todo numero natural que
//       eh igual a soma de todos os seus divisores.
//
//       ex.:
//          6 = 1 + 2 + 3
//          28 = 1 + 2 + 4 + 7
//          496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248
//[]-------------------------------------------------------------[]
int conta_numeros_perfeitos(int v[], int n){
	int cont= 0;
  for(int i=0; i<n; i++){
		int soma = 0; // Variável que vai armazenar a soma
		
		/* Variável que armazenará o valor de quociente de cada divisão
		 * Ele terá esse valor inicial pois é seu MDC
		*/
		int quo = v[i]/2;
		// Enquanto quociente for maior igual do que "1"
		while(quo>=1){
			// Se o resto da divisão entre elemento do vetor e o quociente for "0" significa que ele é divisível pelo consciente
			if (v[i]%quo==0){
				/// Soma o valor do quociente a variável "soma"
				soma = soma + quo;
			}
			// Subtraí "1" à variável "quo"
			quo--;
		}
		// Se a elemento do vetor for igual a soma de seus divisores, aumenta "1" ao contador
		if(v[i]==soma) cont++;
	}
	return cont;
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
   return testar(conta_numeros_perfeitos(v, 6), 1);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,28,7,10,2};
   return testar(conta_numeros_perfeitos(v, 10), 2);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(conta_numeros_perfeitos(v, 10), 0);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   return testar(conta_numeros_perfeitos(v, 7), 1);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,496,14,28};
   return testar(conta_numeros_perfeitos(v, 6), 2);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   return testar(conta_numeros_perfeitos(v, 10), 1);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   return testar(conta_numeros_perfeitos(v, 10), 0);
}

float caso_de_teste08(){
   int v[10] = {6,28,496,8128,26,12,44,29,16,24};
   return testar(conta_numeros_perfeitos(v, 10), 4);
}

float caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,6,24};
   return testar(conta_numeros_perfeitos(v, 10), 2);
}

float caso_de_teste10(){
   int v[10] = {41,29,47,27,29,35,42,39,46,32};
   return testar(conta_numeros_perfeitos(v, 10), 0);
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
