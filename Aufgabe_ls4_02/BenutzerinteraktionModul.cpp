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

bool Materialwahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    bool ausgewaelt = false;
    do
    {
        UberschriftMaterial();
        auswahl = Auswahlfunktion();
        switch (auswahl)
        {
        case 1:
            ausgewaelt = Leiterwahl(rho20, alpha, beta);
            if (ausgewaelt)
                return false;
            break;
        case 2:
            ausgewaelt = Metalwahl(rho20, alpha, beta);
            if (ausgewaelt)
                return false;
            break;
        case 3:
            ausgewaelt = Widerstandlegirungwahl(rho20, alpha, beta);
            if (ausgewaelt)
                return false;
            break;
        }



    } while (auswahl != 4);
    return true;
}

bool Leiterwahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        UberschriftLeiter();
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


bool Metalwahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        UberschriftMetal();
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


bool Widerstandlegirungwahl(double& rho20, double& alpha, double& beta)
{
    int auswahl = 0;
    do
    {
        UberschriftLegirung();
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
            Konstantin(rho20, alpha, beta);
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
    UberschriftTemperatur();
    cin >> eingabe;
    return eingabe;
}

double WiederstandEigabe()
{
    double eingabe;
    UberschriftWiederstand();
    cin >> eingabe;
    return eingabe;
}


double LaengeEigabe()
{
    double eingabe = 0;
    UberschriftLaenge();
    while (!(cin >> eingabe)) 									            // Eingabe des oberen Grenzwerts, Schleife die gewährleistet, dass die Eingabe eine Zahl ist
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ungültige Eingabe!" << endl;                                       // Ausgabe Text
        cout << "Versuch es mit einer Zahl" << endl;	                // Ausgabe Text
        cout << "-->";
    }
    cout << endl;
    return eingabe;

}
double QuerschnittEigabe()
{
    double eingabe = 0;
    UberschriftQuerschnitt();
    while (!(cin >> eingabe)) 									            // Eingabe des oberen Grenzwerts, Schleife die gewährleistet, dass die Eingabe eine Zahl ist
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ungültige Eingabe!" << endl;                                       // Ausgabe Text
        cout << "Versuch es mit einer Zahl" << endl;	                // Ausgabe Text
        cout << "-->";
    }
    cout << endl;
    return eingabe;

}


void UberschriftHauptmenu()
{
    system("cls");
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
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Wähle das Material  -------------------------------" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- (1) Leiter- und Kontaktmaterial  " << endl;                                   // Ausgabe Text
    cout << endl;
    cout << "- (2) Sonstige Metalle" << endl;                                      // Ausgabe Text
    cout << endl;
    cout << "- (3) Widerstandlegirungen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "- (4) Auswahl abbrechen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UberschriftLeiter()
{
    system("cls");
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
    cout << "- (7) Auswahl abbrechen" << endl;                                       // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UberschriftTemperatur()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Tippe das Temperatur in °C und bestätige mit Enter-" << endl;        // Ausgabe Text
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UberschriftWiederstand()
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Tippe das Wiederstand in Ohm und bestätige mit Enter-" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UberschriftLaenge()
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Tippe die Länge in Meter und bestätige mit Enter-" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void UberschriftQuerschnitt()
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Tippe das Querschnitt in mm² und bestätige mit Enter-" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    cout << "-->";
}

void ErgebnisAusgabe(double ergebnis)
{
    system("cls");
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << "-Temperaturabhängige Wiederstand Rtheta beträgt:      -" << endl;        // Ausgabe Text
    cout << "@    " << ergebnis << " Ohm                               -" << endl;        // Ausgabe Text
    cout << "------------------------------------------------------" << endl;        // Ausgabe Text
    cout << endl;
    system("pause");
    return;
}

void UberschriftMetal()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabe Text
    cout << "- Wähle das Material  -------------------------------" << endl;        // Ausgabe Text
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
void UberschriftLegirung()
{
    system("cls");
    cout << "-----------------------------------------------------" << endl;        // Ausgabse Text
    cout << "- Wähle das Material  -------------------------------" << endl;        // Ausgabe Text
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