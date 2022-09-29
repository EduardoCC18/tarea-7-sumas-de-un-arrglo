#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pedirCadena(char arr[100]);
char PedirCaracter(char caracter);
int CalcularCaracter(char arr[100], char caracter);

int main(void) {

char arr[100], caracter;
int  Rfinal;

pedirCadena(arr);
caracter = PedirCaracter(caracter);
Rfinal = CalcularCaracter(arr, caracter);

printf("El caracter aparece un total de:  %d\n", Rfinal); 

}


void pedirCadena(char arr[100])
 {

  printf("¿cual es la frase?\n");
  gets(arr);
  fflush(stdin);
   
   }

char PedirCaracter(char caracter) 
  {
    printf("¿que caracter buscar?\n");
    scanf("%c", &caracter);
    return caracter;
    
  }

int CalcularCaracter(char arr[100], char caracter)
{
  int cont, Rfinal;

  Rfinal = 0;

  for(cont=0;cont<100 && arr[cont]!='\0';cont++)
    {
     if (arr[cont] == caracter){
        Rfinal++;
      }  
    }  

return Rfinal;
  
  }