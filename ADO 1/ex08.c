//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex08.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 
//[]-------------------------------------------------------------[]
//   Funcao: ultimo_digito()
//   Entrada: inteiros a e b, nao negativos 
//   Saida: devolve true se ele tem os mesmos ultimos digitos
//          ex: 57 e 27, tem o ultimo digito igual a 7
//[]-------------------------------------------------------------[]
bool ultimo_digito(int a, int b){
   // escreva seu codigo aqui ...	
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
   return testar(ultimo_digito(7,17), true);
}

float caso_de_teste02(){
    return testar(ultimo_digito(6,17), false);
}

float caso_de_teste03(){
    return  testar(ultimo_digito(3,113), true);
}

float caso_de_teste04(){
    return testar(ultimo_digito(114, 113), false);
}

float caso_de_teste05(){
    return testar(ultimo_digito(114,4), true);
}

float caso_de_teste06(){
    return testar(ultimo_digito(10,0), true);
}

float caso_de_teste07(){
    return testar(ultimo_digito(11,0), false);
}

float caso_de_teste08(){
    return testar(ultimo_digito(27,48), false);
}

float caso_de_teste09(){
    return testar(ultimo_digito(50, 40), true);
}

float caso_de_teste10(){
    return testar(ultimo_digito(57, 27), true);
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

   printf("exercicio 08\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
