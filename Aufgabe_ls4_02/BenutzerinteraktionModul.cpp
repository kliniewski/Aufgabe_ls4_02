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


#include <iostream>							                                        // Einbindung Bibliothek "Ein und Ausgabebefehle"
#include <cstdlib>							                                        // Einbindung Bibliothek "Standart Bibliothek"
#include "FormelnModul.h"                                               // include auf eigenen Headerdatei
#include "ParameterModul.h"                                                // include auf Headerdatei GrundFun
#include "BenutzerinteraktionModul.h"                                                // include auf Headerdatei GrundFun
#include <windows.h>                                                                // include windows.h


using namespace std;                                                                // Definition des namespace


int Auswahlfunktion()
{
    int auswahl;
                                                              // Ausgabe Text
    while (!(cin >> auswahl)) 									            // Eingabe des oberen Grenzwerts, Schleife die gewährleistet, dass die Eingabe eine Zahl ist

    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ungültige Eingabe!" << endl;                                       // Ausgabe Text
        cout << "Versuch es mit einer Zahl" << endl;	                // Ausgabe Text
        cout << "-->";
    }
    cout << endl;
    return auswahl;

}

void Materialwahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        system("cls");
        UberschriftMaterial();
        auswahl = Auswahlfunktion();
        switch (auswahl)
        {
        case 1:
            cout << "Leiter- und Kontaktmaterial" << endl;                                       // Ausgabe Text

            Leiterwahl(rho20, alpha, beta);
            printf("\n*** You selected 1 ***\n\n");
            break;
        case 2:
            cout << "Sonstige Metalle" << endl;                                       // Ausgabe Text
            Materialwahl(rho20, alpha, beta);
            printf("\n*** You selected 2 ***\n\n");
            break;
        case 3:
            cout << "Widerstandlegirungen" << endl;                                       // Ausgabe Text
            printf("\n*** You selected 3 ***\n\n");
            break;
        }



    } while (auswahl != 4);
}

void Leiterwahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        system("cls");
        UberschriftLeiter();
        auswahl = Auswahlfunktion();
        switch (auswahl)
        {
        case 1:
            Silber(rho20, alpha);
            return;
            break;
        case 2:
            Kupfer(rho20, alpha);
            return;
            break;
        case 3:
            Gold(rho20, alpha);
            return;
            break;
        case 4:
            Aluminium(rho20, alpha);
            return;
            break;
        case 5:
            Wolfram(rho20, alpha);
            return;
            break;
        case 6:
            Zinn(rho20, alpha);
            printf("\n*** You selected 1 ***\n\n");
            return;
            break;
        }



    } while (auswahl != 4);
}
void UberschriftHauptmenu()
{
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Wähle die Situation -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Rtheta anhand das Material, R20 und die Temperatur " << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Rtheta anhand die Durchmesser, Querschnitt, Material und die Temperatur" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Programm beenden" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}



void UberschriftMaterial()
{
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Wähle das Material  -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Leiter- und Kontaktmaterial  " << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Sonstige Metalle" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Widerstandlegirungen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UberschriftLeiter()
{
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Wähle das Material  -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Silber" << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Kupfer" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Gold" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (4) Aluminium" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (5) Wolfram" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (6) Zinn" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}