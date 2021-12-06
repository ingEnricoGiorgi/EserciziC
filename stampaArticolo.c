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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int dimensione;
	int lunghezza_articolo;
	char riga[256];
	char articolo_base[5000];
	char* pCh = articolo_base;
	FILE* file;
	int x = 0;
	if (argc < 2) {
		printf("Non ci sono abbastanza parametri, controlla di aver messo il nome del file\n");
		exit(-1);
	}
	if (argc < 3) {
		printf("Non ci sono abbastanza parametri, controlla di aver messo il numero massimo di caratteri per riga\n");
		exit(-2);
	}
	dimensione = atoi(argv[2]);
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("il file %s non esiste nella posizione indicata\n", argv[1]);
		exit(-3);
	}
	/*                                                   <------->
	   [...\n...\n....\n....\n\0] --> [..............\0] --> [.......]\n
	*/
	while (fgets(riga, sizeof(riga), file) != NULL)
	{
		int scritti;
		if (riga[strlen(riga) - 1] == '\n')
			riga[strlen(riga) - 1] = '\0';
		scritti = sprintf(pCh, "%s", riga);
		pCh += scritti;
	}
	//pCh = articolo_base;
	pCh = &(articolo_base[0]);
	lunghezza_articolo = strlen(articolo_base);

	while (pCh < (articolo_base + lunghezza_articolo)) {
		printf("%.*s", dimensione, pCh);
		pCh += dimensione;

		/*
		printf("%.*s\n", j, pCh);
		pCh += j;
		x++;
			if (strlen(pCh) <= j) {
				printf("%s\n", pCh);
				break;
			}
			if (pCh[0] == ' ') pCh++;
			if (pCh[j] == ' ') {
				printf("%.*s\n", j, pCh);
				pCh += j;
			}
			else {
				while (pCh[j - 1] != ' ') j--;
				printf("%.*s\n", j, pCh);
				pCh += j;
			}*/
	}
	fclose(file);
	return x;
}
