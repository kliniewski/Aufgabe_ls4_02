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


#define _USE_MATH_DEFINES

#include <iostream>					            // Einbindung Bibliothek "Ein und Ausgabebefehle"
#include <cstdlib>					            // Einbindung Bibliothek "Standart Bibliothek"#define _USE_MATH_DEFINES
#include <math.h>              
#include "ParameterModul.h"             // include auf eigenen Headerdatei
#include <windows.h>


void Silber(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.0165;
	alpha = 0.0038;
	beta = 0.7;
	return;
}

void Kupfer(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.0178;
	alpha = 0.0039;
	beta = 0.6;
	return;
}
void Gold(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.023;
	alpha = 0.0039;
	beta = 0.5;
	return;
}
void Aluminium(double& rho20, double& alpha, double& beta) 
{
	rho20 = 0.0286;
	alpha = 0.0037;
	beta = 1.3;
	return;
}

void Wolfram(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.055;
	alpha = 0.0048;
	beta = 1.0;
	return;
}

void Zinn(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.12;
	alpha = 0.0042;
	beta = 6.0;
	return;
}



//////Sonstige Metalle


void Zink(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.061;
	alpha = 0.0042;
	beta = 2.0;
	return;
}

void Nickel(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.1;
	alpha = 0.0048;
	beta = 9.0;
	return;
}

void Eisen(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.12;
	alpha = 0.0052;
	beta = 6.0;
	return;
}

void Platin(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.13;
	alpha = 0.0025;
	beta = 0.6;
	return;
}

void Blei(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.21;
	alpha = 0.0042;
	beta = 2.0;
	return;
}

void Quecksilber(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.96;
	alpha = 0.00092;
	beta = 1.2;
	return;
}

//Widerstandslegierungen
void Manganin(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.42;
	alpha = 0.00001;
	beta = 0.4;
	return;
}

void Nickelin(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.43;
	alpha = 0.00011;
	beta = 0;
	return;
}

void Konstantan(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.5;
	alpha = 0.000003;
	beta = 0;
	return;
}

void Chromnickel(double& rho20, double& alpha, double& beta)
{
	rho20 = 1.12;
	alpha = -0.00014;
	beta = 0;
	return;
}
