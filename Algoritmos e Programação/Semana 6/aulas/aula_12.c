/* Ian Kersz - Cartão ufrgs: 00338368
23.02.22

in: 2 valores
out: 1 valor 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

#define TAM 30

int main(void){

    char palavra[TAM]={"UFRGS\0"};

    printf("\nString = %s\n", palavra);

    return 0;
}