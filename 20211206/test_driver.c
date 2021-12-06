#include <stdio.h> //printf
#include <stdlib.h>
#include <limits.h>
#include "quiz.h"


int main(int argc, char *argv[]) {
   /*
   int a,b;
   if (argc != 3){
       printf("usage: <int a> <int b>\n");
       exit(-1);
   }
   a=atoi[argv[1];
   if (a==0){
       printf("deve essere un interooo");
       exit(-2);//???
   }
   b=atoi[argv[2];
   if (b==0){
       printf("deve essere un interooo");
       exit(-3);//???
   }
   printf("quiz(%i, %i) = %i\n ",a,b,quiz(a,b));
   reurn 0;
   */
     int x=atoi(argv[1]);
     int y=atoi(argv[2]);
     int result=quiz(x,y);
     printf("il risultato è: %i",result);    
   return 0; 
}
