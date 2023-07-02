import math

scelta = 0
menu = 1

print ("Calcola il perimetro")

while menu == 1:
	while scelta != 1 and scelta != 2 and scelta != 3:
		print ("\nScegli la figura digitando il numero corrispondente")
		scelta = int (input ("1. Quadrato\n2. Cerchio\n3. Rettangolo\n"))

	if scelta == 1:
		lato = int (input ("\nInserisci la lughezza del lato del quadrato: "))
		perimetroquadr = lato * 4
		print ("Il perimetro del quadrato e' ", perimetroquadr)
	elif scelta == 2:
		raggio = int (input ("\nInserisci la lunghezza del raggio: "))
		circonf = 2 * math.pi * raggio
		print ("La circonferenza del cerchio e' {:.3f}".format(circonf))
	else:
		base = int (input ("\nInserisci la lunghezza della base: "))
		altezza = int (input ("Inserisci il valore dell'altezza: "))
		perimetro = (base + altezza) * 2
		print ("Il perimetro del rettangolo e' ", perimetro)
	print ("\nVuoi calcolare il perimetro di un'altra figura?")
	menu = int (input ("1. Si\n2. No\n"))
	scelta = 0

