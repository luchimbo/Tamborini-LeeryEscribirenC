#include <stdio.h>
#include <string.h>

const int MAX_USUARIO = 30;
const int MAX_MAIL = 100;
int main(){

 char usuario[MAX_USUARIO];
 printf("Cual es tu usuario?\n");
 scanf("%s", usuario);
 
 char mail[MAX_MAIL];
 printf("Escriba su mail\n");
 scanf("%s", mail);

 printf("Email del usuario %s : %s\n", usuario, mail);

	return 0;
}