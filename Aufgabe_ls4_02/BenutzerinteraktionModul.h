int Auswahlfunktion();
bool Materialwahl(double &rho20, double &alpha, double &beta);
bool Leiterwahl(double &rho20, double &alpha, double &beta);
bool Metalwahl(double& rho20, double& alpha, double& beta);
bool Widerstandlegirungwahl(double& rho20, double& alpha, double& beta);

double TemperaturEingabe();
double WiederstandEigabe();
double LaengeEigabe();
double QuerschnittEigabe();


void UberschriftHauptmenu();
void UberschriftMaterial();
void UberschriftLeiter();
void UberschriftMetal();
void UberschriftLegirung();


void UberschriftTemperatur();
void UberschriftWiederstand();
void UberschriftLaenge();
void UberschriftQuerschnitt();


void ErgebnisAusgabe(double ergebnis);
