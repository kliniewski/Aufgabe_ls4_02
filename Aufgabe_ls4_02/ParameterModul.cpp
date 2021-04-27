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
	rho20 = 0.0165;
	alpha = 0.0038;
	beta = 0.6;
	return;
}
void Gold(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.0165;
	alpha = 0.0038;
	beta = 0.5;
	return;
}
void Aluminium(double& rho20, double& alpha, double& beta) 
{
	rho20 = 0.0165;
	alpha = 0.0038;
	beta = 1.3;
	return;
}

void Wolfram(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.0165;
	alpha = 0.0038;
	beta = 1.0;
	return;
}
void Zinn(double& rho20, double& alpha, double& beta)
{
	rho20 = 0.0165;
	alpha = 0.0038;
	beta = 6.0;
	return;
}