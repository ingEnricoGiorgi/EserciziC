#include <stdio.h>
#include <string.h>
/*
Ho scritto un articolo per un giornale. Ho usato il formato solo testo. L'articolo è
 stato accettato! Per stamparlo mi viene però richiesto di ri-organizzarlo in righe
 più di 30 caratteri affinchè possa essere inserito come colonna in una pagina della
  prossima uscita del giornale.

Scrivi un programma che accetti due parametri:

    il nome del file contenente l'articolo originale
    il numero massimo di caratteri per riga

Il programma deve emettere sullo standard output le righe 
riorganizzate secondo quanto richiesto e restituire, come valore di ritorno, 
il numero totale delle stesse.
--------------
fgets


    str − This is the pointer to an array of chars where the string read is stored.

    n − This is the maximum number of characters to be read (including the final null-character).
     Usually, the length of the array passed as str is used.

    stream − This is the pointer to a FILE object that identifies the stream where characters are read from.

*/
int main (int argc, char* argv[]){
 char riga_corrente[80];
 FILE*fo;
 fo=fopen(argv[1], "r");

 while (fgets(riga_corrente,sizeof(riga_corrente),fo)!=NULL){
     printf("%s", &(riga_corrente[30]));
 }
 fclose(fo);
}