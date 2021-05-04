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
//		Letzte �nderung:	20.04.2021
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
    while (!(cin >> auswahl)) 									            // Eingabe des oberen Grenzwerts, Schleife die gew�hrleistet, dass die Eingabe eine Zahl ist

    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ung�ltige Eingabe!" << endl;                                       // Ausgabe Text
        cout << "Versuch es mit einer Zahl" << endl;	                // Ausgabe Text
        cout << "-->";
    }
    cout << endl;
    return auswahl;

}

bool MaterialWahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    bool ausgewaelt = false;
    do
    {
        UeberschriftMaterial();
        auswahl = Auswahlfunktion();
        switch (auswahl)
        {
        case 1:
            ausgewaelt = LeiterWahl(rho20, alpha, beta);
            if (ausgewaelt)
                return false;
            break;
        case 2:
            ausgewaelt = MetallWahl(rho20, alpha, beta);
            if (ausgewaelt)
                return false;
            break;
        case 3:
            ausgewaelt = WiderstandLegierungWahl(rho20, alpha, beta);
            if (ausgewaelt)
                return false;
            break;
        }



    } while (auswahl != 4);
    return true;
}

bool LeiterWahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        UeberschriftLeiter();
        auswahl = Auswahlfunktion();
        switch (auswahl)
        {
        case 1:
            Silber(rho20, alpha, beta);
            return true;
            break;
        case 2:
            Kupfer(rho20, alpha, beta);
            return true;
            break;
        case 3:
            Gold(rho20, alpha, beta);
            return true;
            break;
        case 4:
            Aluminium(rho20, alpha, beta);
            return true;
            break;
        case 5:
            Wolfram(rho20, alpha, beta);
            return true;
            break;
        case 6:
            Zinn(rho20, alpha, beta);
            return true;
            break;
        }



    } while (auswahl != 7);
    return false;
}


bool MetallWahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        UeberschriftMetall();
        auswahl = Auswahlfunktion();
        switch (auswahl)
        {
        case 1:
            Zink(rho20, alpha, beta);
            return true;
            break;
        case 2:
            Nickel(rho20, alpha, beta);
            return true;
            break;
        case 3:
            Eisen(rho20, alpha, beta);
            return true;
            break;
        case 4:
            Platin(rho20, alpha, beta);
            return true;
            break;
        case 5:
            Blei(rho20, alpha, beta);
            return true;
            break;
        case 6:
            Quecksilber(rho20, alpha, beta);
            return true;
            break;
        }



    } while (auswahl != 7);
    return false;
}


bool WiderstandLegierungWahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        UeberschriftLegierung();
        auswahl = Auswahlfunktion();
        switch (auswahl)
        {
        case 1:
            Manganin (rho20, alpha, beta);
            return true;
            break;
        case 2:
            Nickelin(rho20, alpha, beta);
            return true;
            break;
        case 3:
            Konstantan(rho20, alpha, beta);
            return true;
            break;
        case 4:
            Chromnickel(rho20, alpha, beta);
            return true;
            break;
        }



    } while (auswahl != 5);
    return false;
}


double TemperaturEingabe()
{
    double eingabe;
    UeberschriftTemperatur();
    cin >> eingabe;
    return eingabe;
}

double WiderstandEingabe()
{
    double eingabe;
    UeberschriftWiderstand();
    cin >> eingabe;
    return eingabe;
}


double LaengeEingabe()
{
    double eingabe = 0;
    UeberschriftLaenge();
    while (!(cin >> eingabe)) 									            // Eingabe des oberen Grenzwerts, Schleife die gew�hrleistet, dass die Eingabe eine Zahl ist
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ung�ltige Eingabe!" << endl;                                       // Ausgabe Text
        cout << "Versuch es mit einer Zahl" << endl;	                // Ausgabe Text
        cout << "-->";
    }
    cout << endl;
    return eingabe;

}
double QuerschnittEingabe()
{
    double eingabe = 0;
    UeberschriftQuerschnitt();
    while (!(cin >> eingabe)) 									            // Eingabe des oberen Grenzwerts, Schleife die gew�hrleistet, dass die Eingabe eine Zahl ist
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ung�ltige Eingabe!" << endl;                                       // Ausgabe Text
        cout << "Versuch es mit einer Zahl" << endl;	                // Ausgabe Text
        cout << "-->";
    }
    cout << endl;
    return eingabe;

}


void UeberschriftHauptmenu()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- W�hle die Berechnungsgrundlage f�r Rtheta -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Material, R20 und Temperatur " << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Material, Querschnitt, Durchmesser und Temperatur" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Programm beenden" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}



void UeberschriftMaterial()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- W�hle das Material  -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Leiter- und Kontaktmaterial  " << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Sonstige Metalle" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Widerstandslegierungen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (4) Auswahl abbrechen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UeberschriftLeiter()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- W�hle das Material  -------------------------------" << endl;        // Ausgabe Text
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
    cout << "- (7) Auswahl abbrechen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UeberschriftTemperatur()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Gebe die Temperatur in �C ein und best�tige mit Enter-" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UeberschriftWiderstand()
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Gebe den Widerstand in Ohm ein und best�tige mit Enter-" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UeberschriftLaenge()
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Gebe die L�nge in Meter ein und best�tige mit Enter-" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UeberschriftQuerschnitt()
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Tippe den Querschnitt in mm� und best�tige mit Enter-" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void ErgebnisAusgabe(double ergebnis)
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "-Temperaturabh�ngiger Widerstand Rtheta betr�gt:      -" << endl;        // Ausgabe Text
    cout << "@    " << ergebnis << " Ohm                               -" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    system("pause");
    return;
}

void UeberschriftMetall()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- W�hle das Material  -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Zink" << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Nickel" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Eisen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (4) Platin" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (5) Blei" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (6) Quecksilber" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (7) Auswahl abbrechen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}
void UeberschriftLegierung()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgase Text
    cout << "- W�hle das Material  -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Manganin" << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Nickelin" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Konstantan" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (4) Chromnickel" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (5) Auswahl abbrechen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}