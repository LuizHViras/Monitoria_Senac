//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: sequencia123()
//   Entrada: vetor v de inteiros e o tamanho n. 
//   Saida: devolve true se a sequencia de numeros
//          1, 2, 3 aparece no vetor em algum lugar.
//[]-------------------------------------------------------------[]
bool sequencia123(int v[], int n){
  // Loop percorrendo o vetor inteiro
	for(int i=0; i<n; i++){
		// Se a posição "i" do vetor é "1", a próxima for "2" e a terceira for "3" retorna "true"
		if(v[i]==1 && v[i+1]==2 && v[i+2]==3) return true;
	}  
	/* Quando se retorna algo para a função, ela se torna "imutável"
	 * Se ele não retornar true ele retornará false, mesmo que não tenha "else"
	 * Se ele retornar true não vai mudar para false */
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
    int v[5] = {1,1,2,3,1};
    return testar(sequencia123(v, 5), true);
}

float caso_de_teste02(){
    int v[5] = {1,1,2,4,1};
    return testar(sequencia123(v, 5), false);
}

float caso_de_teste03(){
    int v[6] = {1,1,2,1,2,3};
    return testar(sequencia123(v, 6), true);
}

float caso_de_teste04(){
    int v[6] = {1,1,2,1,2,1};
    return testar(sequencia123(v, 6), false);
}

float caso_de_teste05(){
    int v[3] = {1,2,3};
    return testar(sequencia123(v, 3), true);
}

float caso_de_teste06(){
    int v[3] = {1,1,1};
    return testar(sequencia123(v, 3),false);
}

float caso_de_teste07(){
    int v[2] = {1,2};
    return testar(sequencia123(v, 2), false);
}

float caso_de_teste08(){
    int v[2] = {5,5};
    return testar(sequencia123(v, 2), false);
}

float caso_de_teste09(){
    int v[1] = {2};
    return testar(sequencia123(v, 1), false);
}

float caso_de_teste10(){
    int v[1] = {9};
    return testar(sequencia123(v, 1), false);
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
