#include <stdio.h> //printf
#include <stdlib.h>
#include "fatt.h"

int main(int argc, char *argv[])
{
    unsigned long int a; //per coprire massima gittata
    if (argc!=2){
        printf("Usage: test_fatt <int a> \n");
        exit(-1);
    }

    //strtoul ??????????????? unsigned long
    a=atol(argv[1]);
    if(a==0){
        printf("immetti un intero diverso da 0");
        exit(-2);
    }
printf("fatt(%lu) = %lu \n",a,fatt(a));
return 0;
//llu long long unsigned
}