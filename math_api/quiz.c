
#include "quiz.h" //"" perchè l'implemnto io la funzione


int quiz (int x, int y){
    int r;
    if(x<0) x= -x;//valori resi positivi
    if(y<0) y= -y;
    while(y){ //finchè y è diverso d a 0
        r= x % y;
        x=y;
        y=r;   
    }
    return x;
}