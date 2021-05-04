int Auswahlfunktion();
bool Materialwahl(double &rho20, double &alpha, double &beta);
bool Leiterwahl(double &rho20, double &alpha, double &beta);
bool Metalwahl(double& rho20, double& alpha, double& beta);
bool Widerstandlegirungwahl(double& rho20, double& alpha, double& beta);

double TemperaturEingabe();
double WiderstandEingabe();
double LaengeEingabe();
double QuerschnittEingabe();


void UeberschriftHauptmenu();
void UeberschriftMaterial();
void UeberschriftLeiter();
void UeberschriftMetal();
void UeberschriftLegierung();


void UeberschriftTemperatur();
void UeberschriftWiderstand();
void UeberschriftLaenge();
void UeberschriftQuerschnitt();


void ErgebnisAusgabe(double ergebnis);
