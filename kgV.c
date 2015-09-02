/* ---------------------------------------
	Autor: Gerd Gesell
	Version 1.0		erstellt am  10.04.2008
	Version 1.1		erstellt am	 29.09.2009

	Dieses Programm liesst vom Benutzer zwei Zahlen ein und
	berechnet das kleinste gemeinsame Vielfache.

	programmiertechnische Hinweise:
	- Variablendeklaration
	- Initialisierung von Variablen
	- printf mit Variablen
	- Bl�cke mit {} markiert
	- Ausgabe von Variablenwerte bei Schleifendurchl�ufen
	- strukturierte Schreibweise
	- Modulofunktion
   ----------------------------------------- */
#include <stdio.h>

void main(void)
{
	int zahl1, zahl2, teiler, zaehler=0;

	printf("\nGeben Sie die erste Zahl ein: ");
	fflush (stdin);
	scanf ("%i", &zahl1);
	printf("\nGeben Sie die zweite Zahl ein: ");
	fflush (stdin);
	scanf ("%i", &zahl2);
	
	// sorgt daf�r, dass zahl1 die kleinere Zahl ist und teiler den Wert der gr�sseren Zahl hat
	if (zahl1 > zahl2)
	{
		teiler = zahl1;
		zahl1 = zahl2;
		zahl2 = teiler;
	}
	else
		teiler = zahl2;

	// Hier wird der Modulo-Operator verwendet:
	while ((teiler % zahl1 != 0))
	{
		teiler = teiler + zahl2;
		printf ("\nDurchlauf Nummer %i", zaehler++);
	}

	// Ausgabe von Umlauten, Variablen und direkten Berechnungen
	printf ("\nDas kgV ist %i und enth\204lt %i mal %i und %i mal %i", teiler, (teiler/zahl1), zahl1, (teiler/zahl2), zahl2);
	fflush (stdin);
	getchar();
}
