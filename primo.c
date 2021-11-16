#include <stdio.h>
##include<stdlib.h>
int main(int argc, char *argv[]){
printf(“forse… (“numero parametri: %d) %s\n”, argc, argv[0]);
if(argc>1) printf(“primo argomento utente: %S\n”, argv[1]);
 if(argc>2){
anni=atoi(argv[2]); //alphanumeric to integer
  if(anni !=0)
   printf(“secondo argomento utente: (%S) valido %d  \n”, argv[2], anni);
  else{
   printf(“secondo argomento utente: (%S) non valido \n”, argv[2]);
   return -1;
      }
}
return 0;
}
blu blu