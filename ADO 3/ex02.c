//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Funcao: maior_primo()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saida:   devolve o maior numero primo do vetor,
//            caso exista, caso contrario devolva 0.
//[]-------------------------------------------------------------[]
int maior_primo(int v[], int n){
  int eh_primo, num_primo=0;

	// Loop que percorre o vetor inteiro
	for(int i=0; i<n; i++){
		/* Zera o comparador
		 * Caso ele nãos eja zerado ele será o resultado do anterior
		 * Exemplo: Caso o v[i-1]=4, o eh_primo = 1, mas se v[i]=5 ele não será contado como primo pois o eh_primo = 1 */
		eh_primo=0;
		// Loop que divide o elemento do vetor por cada número entre "2" (menor primo possível) e a metade desse mesmo elemento (qualquer valor maior do que esse resultará em um valor decimal)
		for(int j=2; j<=v[i]/2; j++){
			// Se o elemento divido por qualquer número diferente de 1 e ele mesmo for igual a 0
			if(v[i]%j == 0){
				// eh_primo indica que o número não é primo
				eh_primo++;
				// Para o loop
				break;
			}
		}
		/* Se o eh_primo não teve alteração, o elemento é primo
		 * O próximo número primo maior que num_primo será o novo valor de num_primo */
		if(eh_primo==0 && v[i]>num_primo) num_primo = v[i];
	}
	// Retorna o maior número primo do vetor
	return num_primo;
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
   return testar(maior_primo(v, 6), 5);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,2};
   return testar(maior_primo(v, 10), 7);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(maior_primo(v, 10), 13);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   return testar(maior_primo(v, 7), 0);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   return testar(maior_primo(v, 6), 17);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,0};
   return testar(maior_primo(v, 10), 7);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,30};
   return testar(maior_primo(v, 10), 19);
}

float caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,14};
   return testar(maior_primo(v, 10), 47);
}

float caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   return testar(maior_primo(v, 10), 37);
}

float caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   return testar(maior_primo(v, 10), 47);
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