//
//	Inhalt:
//		Einordnung:			FS-LF5-LS4
//		Projekt: 			Aufgabe_ls4_01
//		Thema:				Aufgabe 1 - Modularer Taschenrechner
//							
//	Autor:
//		Name:				Carlo Grass, Michal Kliniewski, Anton Lust
//		Organisaion:		BK-GuT
//
//	Datum:
//		Erstellt:			12.03.2021
//		Letzte Änderung:	20.04.2021
//


#include <iostream>											// Einbindung Bibliothek "Ein und Ausgabebefehle"
#include <cstdlib>											// Einbindung Bibliothek "Standart Bibliothek"
#include <locale>											// Einbindung Bibliothek "Sprachpaket"
#include "BenutzerinteraktionModul.h"						// include auf Headerdatei SteuerFun
#include <Windows.h>										// include windows.h


using namespace std;										// Definition des namespace


//
//		Hauptfunktion
//
int main()
{
	

	locale::global(locale("German_germany"));				// Zeichensatz deutsch
	int auswahl = 0;
	double rho20 = 0;
	double alpha = 0;
	double R20 = 0;
	do
	{
		system("cls");
		UberschriftHauptmenu();
		auswahl = Auswahlfunktion();
		switch (auswahl)
		{
		case 1:
			Materialwahl(rho20, alpha);
			printf("\n*** You selected 1 ***\n\n"); 
			break;
		case 2:  
			Materialwahl(rho20, alpha);
			printf("\n*** You selected 2 ***\n\n"); 
			break;
		case 3:  
			printf("\n*** You selected 3 ***\n\n"); 
			break;
		}
	
		

	} while (auswahl != 3);

	return 0;
}

