#include "fatt.h"
/*
int main(int argc, char *argv[])
{
    printf("immetti un numero intero  e ne calcolo il fattoriale");
    int x;
    x=atoi(argc); 
    
    printf("fattoriale: %i",fatt(x));
}*/
int fatt(unsigned long int n){
    if(n==1){
        return 1;
    }else{
        return (n*fatt(n-1));
    }
}