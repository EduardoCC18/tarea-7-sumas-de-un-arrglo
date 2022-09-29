#include <stdio.h>

int PedirTama(int tama);
int Solicitarmar(int numero);
void Rellenar(int numero, int tama, int Cadena[100]);
int SumaPosicionPar(int tama, int resultado, int Cadena[100]);
int SumaNumeroPar(int tama, int resultado, int Cadena[100]);
int SumaLimitada(int tama, int resultado, int Cadena[100]);

int main(void) {

int Cadena[100]; 
int numero, tama, resultado;

tama = PedirTama(tama);
numero = Solicitarmar(numero);
Rellenar(numero, tama, Cadena);

SumaPosicionPar(tama, resultado, Cadena);
SumaNumeroPar(tama, resultado, Cadena);
SumaLimitada(tama, resultado, Cadena);
  
}

int PedirTama(int tama){
printf("¿cuantos numeros seran?\n");
scanf("%d", &tama); 
return tama; 
}  

int Solicitarmar(int numero) {

  printf("¿cual es el numero maximo?\n");
  scanf("%d", &numero);
  return numero;
}

void Rellenar(int numero, int tama, int Cadena[100]){

int cont;  
  
for(cont = 0; cont <= tama; cont++){
    Cadena[cont] = rand() % (numero+1);
  } 
}  

int SumaPosicionPar(int tama, int resultado, int Cadena[100]){
  int cont;
  
  resultado = 0;
  
  for(cont = 0; cont <= tama; cont++){

    if(cont % 2 == 0){
    resultado = resultado + Cadena[cont];
    }    
  }

printf("El resultado fue de: %d\n", resultado);  
  
}

int SumaNumeroPar(int tama, int resultado, int Cadena[100]){
  int cont;
  
  resultado = 0;
  
  for(cont = 0; cont <= tama; cont++){

    if(Cadena[cont] % 2 == 0){
    resultado = resultado + Cadena[cont];
    }    
  }
printf("El resultado fue de: %d\n", resultado);
  
}

int SumaLimitada(int tama, int resultado, int Cadena[100]){
  int cont;
  
  resultado = 0;
  cont = 0; 
  
  while(resultado < 100 && cont < tama){
    resultado = resultado + Cadena[cont];
    cont++;
  }

printf("El resultado fue de: %d\n", resultado);
printf("El total de numeros que se sumaron fueron: %d\n", cont);  
  
}
