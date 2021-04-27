#include <iostream>                             // Einbindung Bibliothek "Ein und Ausgabebefehle"                    
#include <cstdlib>                              // Einbindung Bibliothek "Standart Bibliothek"          
#include "FormelnModul.h"            // include auf eigenen Headerdatei
#include <windows.h>


using namespace std;                            // Definition des namespace







double RthetaVonR20(double normWiederstand, double temperatur, double alpha)             // Funktionsdefinition
{
	double ergebnis;
	ergebnis = normWiederstand * (1 + alpha * (temperatur - 20));

	return ergebnis;
}


double Normwiderstand(double laenge, double querschnitt, double rho20)             // Funktionsdefinition
{
	double ergebnis;
	ergebnis = rho20 * laenge / querschnitt;

	return ergebnis;
}
