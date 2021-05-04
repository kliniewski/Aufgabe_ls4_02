int Auswahlfunktion();
bool MaterialWahl(double &rho20, double &alpha, double &beta);
bool LeiterWahl(double &rho20, double &alpha, double &beta);
bool MetallWahl(double& rho20, double& alpha, double& beta);
bool WiderstandLegierungWahl(double& rho20, double& alpha, double& beta);

double TemperaturEingabe();
double WiderstandEingabe();
double LaengeEingabe();
double QuerschnittEingabe();


void UeberschriftHauptmenu();
void UeberschriftMaterial();
void UeberschriftLeiter();
void UeberschriftMetall();
void UeberschriftLegierung();


void UeberschriftTemperatur();
void UeberschriftWiderstand();
void UeberschriftLaenge();
void UeberschriftQuerschnitt();


void ErgebnisAusgabe(double ergebnis);
