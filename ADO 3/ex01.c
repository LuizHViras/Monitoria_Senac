//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Funcao: tem_tres_numeros_iguais()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saida:   devolve true se existe algum numero que
//            aparece exatamente 3 vezes no vetor
//            devolve falso caso contrario
//[]-------------------------------------------------------------[]
bool tem_tres_numeros_iguais(int v[], int n){
  int cont;
	// Loop que percorre o vetor "v[]"
	for (int i=0; i<n; i++){
		// A variável irá contar a quantidade de vezes que o número da posição "v[i]" se repetirá 
		cont=0;
		// Loop que percorre o vetor "v[]", "j" irá variar mas "i" permanecerá fixo
		for (int j=0; j<n; j++){
			// Se o elemento da posição i se repete, soma "1" em "cont"
			if(v[j]==v[i]) cont++;
		}
		// Se um elemento se repetir exatamente "3" vezes, retorna true
		if(cont==3) return true;
	}
	return false;
}


//[]-------------------------------------------------------------[]
//   Funcao: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saida: ok se obtido igual a esperado e nao ok caso contrario
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
   int v[6] = {1,2,3,4,5,6};
   return testar(tem_tres_numeros_iguais(v, 6), false);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,2,9,8,7,10,2};
   return testar(tem_tres_numeros_iguais(v, 10), true);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(tem_tres_numeros_iguais(v, 10), false);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,20,57,20,22};
   return testar(tem_tres_numeros_iguais(v, 7), true);
}

float caso_de_teste05(){
   int v[6] = {14,2,15,4,14,18};
   return testar(tem_tres_numeros_iguais(v, 6), false);
}

float caso_de_teste06(){
   int v[10] = {1,1,1,1,1,1,4,9,6,0};
   return testar(tem_tres_numeros_iguais(v, 10), false);
}

float caso_de_teste07(){
   int v[10] = {2,18,2,33,2,15,24,19,26,30};
   return testar(tem_tres_numeros_iguais(v, 10), true);
}

float caso_de_teste08(){
   int v[10] = {12,28,47,13,26,12,4,29,16,12};
   return testar(tem_tres_numeros_iguais(v, 10), true);
}

float caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   return testar(tem_tres_numeros_iguais(v, 10), false);
}

float caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   return testar(tem_tres_numeros_iguais(v, 10), false);
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