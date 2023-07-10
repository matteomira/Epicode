#include <stdio.h>

#define MAX_LEN 50

void print_menu()												//definizione della funzione che stampa il menu
{
	printf("\n\tMENU\n");
	printf("A - Iniziare una nuova partita\n");
	printf("B - Uscire dal gioco\n");
	printf("Digita la lettera per scegliere l'opzione: ");
}

int gioca_partita()												//definizione della funzione che gestisce le domande del gioco
{
	int punteggio = 0;
	char nomeutente[MAX_LEN];
	char risposta1, risposta2;

	fflush(stdin);												//pulizia del buffer in input in quanto altrimenti causerebbe problemi alle scanf successive

	printf("\nInserisci il nome utente: ");
	fgets(nomeutente, MAX_LEN, stdin);							//utilizzo di fgets per gestire in maniera ottimale una stringa di caratteri
	
	fflush(stdin);												//pulizia del buffer in input in quanto altrimenti causerebbe problemi alle scanf successive

	while (risposta1 != '1' && risposta1 != '2' && risposta1 != '3')
	{
		printf("\n\tDomanda 1\n");
		printf("Qual e' la capitale dell'Italia?\n 1 - Canicatti'\n 2 - Roma\n 3 - Ravenna\n");
		printf("Per rispondere inserisci il numero corrispondente:  ");
		scanf("%c", &risposta1);
	}

	if (risposta1 == '2')
	{
		printf("\nRisposta esatta!\n");
		punteggio++;
	}
	else
		printf("\nRisposta sbagliata!\n");
	
	fflush(stdin);												//pulizia del buffer in input in quanto altrimenti causerebbe problemi alle scanf successive

	while (risposta2 != '1' && risposta2 != '2' && risposta2 != '3')
	{
		printf("\n\tDomanda 2\n");
		printf("Qual e' il fiume piu' lungo d'Italia?\n 1 - Flumendosa\n 2 - Arno\n 3 - Po\n");
		printf("Per rispondere inserisci il numero corrispondente:  ");
		scanf("%c", &risposta2);
	}

	if (risposta2 == '3')
	{
		printf("\nRisposta esatta!\n");
		punteggio++;
	}
	else
		printf("\nRisposta sbagliata!\n");

	printf("\nIl punteggio totale dell'utente %s e':  %d\n", nomeutente, punteggio);

	fflush(stdin);												//pulizia del buffer in input in quanto altrimenti causerebbe problemi alle scanf successive

	return 0;
}


int main()
{
	char scelta = {'\0'};
	
	printf("Benvenuto!\n");
	printf("Rispondi correttamente alle domande!\n");
	
	while (1)
	{
		print_menu();
		scanf("%c", &scelta);
		
		if (scelta == 'A')
				gioca_partita();
		else if (scelta == 'B')
		{
			printf("Grazie per aver giocato, alla prossima\n");
			return 0;
		}
		else
			printf("Errore: il carattere inserito non risulta valido. Riprovare.\n");
	}
	
	return 0;
}
