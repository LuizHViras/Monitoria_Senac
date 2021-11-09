//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: sequencia_66_67()
//   Entrada: vetor v de inteiros e o tamanho n. 
//   Saida: devolve o numero de vezes que dois 6's
//          aparecem um do lado do outro. Conte também
//          os casos em que um 6 eh seguido de 7.
//[]-------------------------------------------------------------[]
int sequencia_66_67(int v[], int n){
  int cont=0;
	// Looping correndo o vetor inteiro
	for(int i=0; i<n; i++){
		// Se a posição "i" do vetor é "6", a próxima for "6" ou "7" aumenta um no contador
		if(v[i]==6 && (v[i+1]==6 || v[i+1]==7)) cont++;
	}  
	// Retorna "cont", a variável que contou quantas vezes tinha um "6" seguido de "6" ou de "7"
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
    int v[3] = {6,6,2};
    return testar(sequencia_66_67(v, 3), 1);
}

float caso_de_teste02(){
    int v[4] = {6,6,2,6};
    return testar(sequencia_66_67(v, 4), 1);
}

float caso_de_teste03(){
    int v[4] = {6,7,2,6};
    return testar(sequencia_66_67(v, 4), 1);
}

float caso_de_teste04(){
    int v[5] = {6,7,2,6,7};
    return testar(sequencia_66_67(v, 5), 2);
}

float caso_de_teste05(){
    int v[3] = {1,6,3};
    return testar(sequencia_66_67(v, 3), 0);
}

float caso_de_teste06(){
    int v[3] = {6,1,1};
    return testar(sequencia_66_67(v, 3),0);
}

float caso_de_teste07(){
    int v[4] = {3,6,7,6};
    return testar(sequencia_66_67(v, 4), 1);
}

float caso_de_teste08(){
    int v[4] = {3,6,6,7};
    return testar(sequencia_66_67(v, 4), 2);
}

float caso_de_teste09(){
    int v[4] = {6,3,6,6};
    return testar(sequencia_66_67(v, 4), 1);
}

float caso_de_teste10(){
    int v[4] = {6,7,6,6};
    return testar(sequencia_66_67(v, 4), 2);
}



//[]-------------------------------------------------------------[]
//    Casos de testes
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
