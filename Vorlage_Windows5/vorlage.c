/* Datei: vorlage.c
Erstellt: 4. Januar 2021 von Wilfried Honekamp
Zweck: Vorlage für Windows-Projekte über Projekt -> Vorlage exportieren
Historie: Version 0.1, Konsole
Zu kompilieren mit: cl vorlage.c */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	system("CHCP 1252");

	int Zahl = 15;

	printf("Hello World\n");
	printf("Zahl: %i\n", Zahl);
	

}
