#include <stdio.h>

#define MAX_LEN 15

int main()
{
	int risposta;
	int punteggio = 0;
	char sceltamenu, nomeutente[MAX_LEN + 1];

	printf("Benvenuto/a!\n");
	printf("Rispondi correttamente alle domande!\n\n");

	do
	{
		while (sceltamenu != 'A' && sceltamenu != 'B')
		{
			printf("\n\tMENU\n");
			printf("A - Iniziare una nuova partita\n");
			printf("B - Uscire dal gioco\n");
			printf("Digita la lettera per scegliere l'opzione...\n");
			scanf("%s", &sceltamenu);
		}

		if (sceltamenu == 'A')
		{
			printf("\nInserisci il nome utente (max 15 caratteri):  ");
			scanf("%s", nomeutente);

			printf("\nDomanda 1\n");
			printf("Qual e' la capitale dell'Italia?\n 1 - Canicatti'\n 2 - Roma\n 3 - Ravenna\n");
			printf("Per rispondere inserisci il numero corrispondente:  ");
			scanf("%d", &risposta);
			if (risposta == 2)
			{
				printf("\nRisposta esatta!\n");
				punteggio++;
			}
			else
			{
				printf("\nRisposta sbagliata!\n");
			}

			printf("\nDomanda 2\n");
			printf("Qual e' il fiume piu' lungo d'Italia?\n 1 - Flumendosa\n 2 - Arno\n 3 - Po\n");
			printf("Per rispondere inserisci il numero corrispondente:  ");
			scanf("%d", &risposta);
			if (risposta == 3)
			{
				printf("\nRisposta esatta!\n");
				punteggio++;
			}
			else
			{
				printf("\nRisposta sbagliata!\n");
			}

			printf("\nIl punteggio totale dell'utente %s e':  %d\n", nomeutente, punteggio);
		}
		else
		{
			return 0;
		}

		sceltamenu = '0';

	} while (true);

	return 0;
}
